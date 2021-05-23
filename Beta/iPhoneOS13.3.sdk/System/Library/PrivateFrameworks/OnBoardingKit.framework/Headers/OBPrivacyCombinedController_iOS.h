/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <OnBoardingKit/OBPrivacyCombinedController.h>

@class NSArray, NSLayoutConstraint, NSString;

__attribute__((visibility("hidden")))
@interface OBPrivacyCombinedController_iOS : OBPrivacyCombinedController

{
    NSLayoutConstraint *_tableViewHeightConstraint;
    NSArray *_identifiers;
    NSArray *_privacyFlows;
}

@property (retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint;
@property (retain, nonatomic) NSArray *identifiers;
@property (retain) NSArray *privacyFlows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithIdentifiers:(id)arg1;
- (void)showPrivacyGateway:(id)arg1;

@end
