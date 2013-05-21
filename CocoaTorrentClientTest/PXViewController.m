//
//  PXViewController.m
//  CocoaTorrentClientTest
//
//  Created by Joseph Blau on 5/20/13.
//  Copyright (c) 2013 Proxignos. All rights reserved.
//

#import "PXViewController.h"

@interface PXViewController ()

@end

@implementation PXViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
  [PXTorrentServer TestLog:@"Shazam"];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
