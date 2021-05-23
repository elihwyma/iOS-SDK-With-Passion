/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSListController.h>

@class NSString, PSSpecifier, TPSCallForwardingController;

@interface TPSCallForwardingListController : TPSListController

{
    TPSCallForwardingController *_callForwardingController;
    PSSpecifier *_conditionalServiceSwitchSpecifier;
    PSSpecifier *_masterSwitchSpecifier;
}

@property (nonatomic, readonly) PSSpecifier *conditionalServiceSwitchSpecifier;
@property (nonatomic, readonly) PSSpecifier *masterSwitchSpecifier;
@property (nonatomic, readonly) TPSCallForwardingController *callForwardingController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)configureCell:(id)arg1;
- (void)callForwardingController:(id)arg1 didChangeServiceType:(long long)arg2;
- (void)callForwardingController:(id)arg1 didChangeValue:(id)arg2 error:(id)arg3;
- (void)setMasterSwitchOn:(id)arg1 specifier:(id)arg2;
- (id)masterSwitchOn:(id)arg1;
- (void)configureCell:(id)arg1 forSpecifier:(id)arg2;
- (id)conditionalServiceTypeSpecifiers;
- (id)unconditionalServiceTypeSpecifiers;
- (void)setConditionalServiceSwitchOn:(id)arg1 specifier:(id)arg2;
- (id)conditionalServiceSwitchOn:(id)arg1;
- (void)setConditionalServiceBusyPhoneNumber:(id)arg1 specifier:(id)arg2;
- (id)conditionalServiceBusyPhoneNumber:(id)arg1;
- (void)setConditionalServiceUnansweredPhoneNumber:(id)arg1 specifier:(id)arg2;
- (id)conditionalServiceUnansweredPhoneNumber:(id)arg1;
- (void)setConditionalServiceUnreachablePhoneNumber:(id)arg1 specifier:(id)arg2;
- (id)conditionalServiceUnreachablePhoneNumber:(id)arg1;
- (void)setUnconditionalServicePhoneNumber:(id)arg1 specifier:(id)arg2;
- (id)unconditionalServicePhoneNumber:(id)arg1;

@end
