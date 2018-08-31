//
//  SafariExtensionViewController.h
//  Extension
//
//  Created by Roman Sokolov on 15.08.2018.
//  Copyright © 2018 Roman Sokolov. All rights reserved.
//

#import <SafariServices/SafariServices.h>
@import AppKit;
@import Cocoa;

@interface SafariExtensionViewController : SFSafariExtensionViewController

+ (SafariExtensionViewController *)sharedController;

@property NSString *domain;

//////////////////////////////////////////////////////////////////////////
#pragma mark - OUTLETS

@property (weak) IBOutlet NSButton *enabledButton;
@property (weak) IBOutlet NSButton *whitelistButton;
@property (weak) IBOutlet NSButton *assistantButton;

//////////////////////////////////////////////////////////////////////////
#pragma mark - ACTIONS

- (IBAction)clickEnabled:(id)sender;
- (IBAction)clickWhitelist:(id)sender;
- (IBAction)clickAssistant:(id)sender;

@end
