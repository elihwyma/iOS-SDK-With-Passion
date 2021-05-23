/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class CNContactStore, CNContainer, DMFApplicationPolicyMonitor, DMFCategoryPolicyMonitor, DMFWebsitePolicyMonitor, NSArray, NSSet, NSString, NSURL, STAskForTimeResource, STConversation, STConversationContext, STManagementState;

@protocol STLockoutPolicyControllerDelegate;

__attribute__((visibility("hidden")))
@interface STLockoutPolicyController : NSObject

{
    unsigned long long _reuseIdentifier;
    long long _style;
    unsigned long long _stateBeforePending;
    STManagementState *_managementState;
    STAskForTimeResource *_askForTimeResource;
    DMFCategoryPolicyMonitor *_categoryPolicyMonitor;
    DMFApplicationPolicyMonitor *_applicationPolicyMonitor;
    NSURL *_websiteURL;
    DMFWebsitePolicyMonitor *_websitePolicyMonitor;
    id <STLockoutPolicyControllerDelegate> _delegate;
    NSString *_categoryIdentifier;
    NSString *_bundleIdentifier;
    CNContactStore *_contactStore;
    unsigned long long _state;
    STConversation *_conversation;
    STConversationContext *_conversationContext;
    NSArray *_contactsHandles;
}

@property (retain) STConversation *conversation;
@property (retain) STConversationContext *conversationContext;
@property (copy) NSArray *contactsHandles;
@property (copy, nonatomic, readonly) NSString *categoryIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSURL *websiteURL;
@property (copy, readonly) NSSet *blockedContactsHandles;
@property (readonly) CNContactStore *contactStore;
@property (readonly) CNContainer *iCloudContainer;
@property (readonly) unsigned long long state;
@property (readonly) _Bool needsToSetRestrictionsPasscode;
@property (readonly) _Bool shouldAllowOneMoreMinute;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_setupCategoryPolicyMonitorForIdentifier:(id)arg1;
- (void)_setupWebsitePolicyMonitorForURL:(id)arg1;
- (void)_updateAllowedByScreenTime:(_Bool)arg1 applicationCurrentlyLimited:(_Bool)arg2;
- (void)_changePolicyToCurrentWithBundleIdentifier:(id)arg1;
- (void)_changePolicyToCurrent;
- (_Bool)_requestAdditionalTime:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_actionRemindMeInMinutesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_actionRemindMeInOneHourWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_actionOneMoreMinuteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_actionIgnoreLimitForTodayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_changePolicyToCurrentWithCategoryIdentifier:(id)arg1;
- (void)_changePolicyToCurrentWithURL:(id)arg1;
- (void)_allowedByScreenTimeDidChange:(_Bool)arg1 conversationContext:(id)arg2;
- (void)_applicationCurrentlyLimitedDidChange:(_Bool)arg1 conversationContext:(id)arg2;
- (_Bool)_changeInternalStateTo:(unsigned long long)arg1;
- (_Bool)_shouldRequestMoreTime;
- (void)_handleChangeToPolicy:(long long)arg1;
- (id)_makeAskForTimeResource;
- (double)_timeIntervalToEndOfDay;
- (void)_authenticatedApproveForAdditionalTime:(double)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_askForTimeResponseWithState:(long long)arg1 respondingParent:(id)arg2 amountGranted:(id)arg3 error:(id)arg4;
- (void)_changeStateToBeforePending;
- (id)initWithCategoryIdentifier:(id)arg1 delegate:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 delegate:(id)arg2;
- (id)initWithWebsiteURL:(id)arg1 delegate:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 contactsHandles:(id)arg2 delegate:(id)arg3;
- (id)initWithBundleIdentifier:(id)arg1 conversationContext:(id)arg2 contactStore:(id)arg3 delegate:(id)arg4;
- (_Bool)handleAction:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_isRestrictionsPasscodeSet;
- (void)_changeStateToInitial;

@end
