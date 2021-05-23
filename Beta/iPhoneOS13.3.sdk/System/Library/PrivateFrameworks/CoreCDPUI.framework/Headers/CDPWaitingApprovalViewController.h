/*
 Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

#import <CoreCDPUI/CDPTableViewController.h>

@class CDPRemoteValidationEscapeOffer, NSString, UIActivityIndicatorView, UIButton, UILabel;

@interface CDPWaitingApprovalViewController : CDPTableViewController

{
    UIActivityIndicatorView *_spinner;
    UILabel *_waitingLabel;
    UIButton *_escapeButton;
    CDPRemoteValidationEscapeOffer *_escapeOffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)initWithEscapeOffer:(id)arg1;
- (void)remoteApprovalSucceeded;
- (void)escapeOfferSelectedWithOption:(id)arg1;

@end
