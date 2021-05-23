/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSListController.h>

@class NSString, PSSpecifier, TPSCallWaitingController;

@interface TPSCallWaitingListController : TPSListController

{
    TPSCallWaitingController *_callWaitingController;
    PSSpecifier *_masterSwitchSpecifier;
}

@property (nonatomic, readonly) PSSpecifier *masterSwitchSpecifier;
@property (nonatomic, readonly) TPSCallWaitingController *callWaitingController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)configureCell:(id)arg1;
- (void)callWaitingController:(id)arg1 didChangeState:(long long)arg2 error:(id)arg3;
- (void)setMasterSwitchOn:(id)arg1 specifier:(id)arg2;
- (id)masterSwitchOn:(id)arg1;
- (void)configureCell:(id)arg1 forSpecifier:(id)arg2;

@end
