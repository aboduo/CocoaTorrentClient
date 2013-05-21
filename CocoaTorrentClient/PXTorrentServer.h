//
//  PXTorrentServer.h
//  CocoaTorrentClientTest
//
//  Created by Joseph Blau on 5/21/13.
//  Copyright (c) 2013 Proxignos. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GCDAsyncSocket.h"

@class PXTorrentServer;
@class PXTorrentClient;
@class PXTorrentPeer;

@protocol PXTorrentServerDelegate <NSObject> 

-(void)torrentServer:(PXTorrentServer *)server didTick:(NSTimeInterval) interval;

@end

@interface PXTorrentServer : NSObject {
  GCDAsyncSocket *_listenSocket;
  NSMutableArray *_clients;
  dispatch_source_t _timer;
  NSDate *_timestamp;
  __weak id<PXTorrentServerDelegate> _delegate;
}

-(void)close;
-(void)addClient:(PXTorrentClient *)client;
-(void)removeClient:(PXTorrentClient *)client;

-(void)addClientAsynchronously:(PXTorrentClient *)client completed:(void(^)()) completed;
-(void)removeClientAsynchronously:(PXTorrentClient *)client completed:(void(^)()) completed;

@end
