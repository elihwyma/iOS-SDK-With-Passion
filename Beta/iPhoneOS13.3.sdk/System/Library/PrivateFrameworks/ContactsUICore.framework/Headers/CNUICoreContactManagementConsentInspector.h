/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSString, STManagementState;

@protocol CNSchedulerProvider;

@interface CNUICoreContactManagementConsentInspector : NSObject

{
    STManagementState *_managementState;
    id <CNSchedulerProvider> _schedulerProvider;
}

@property (nonatomic, readonly) STManagementState *managementState;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)contactManagementConsentStateFromSTContactManagementState:(long long)arg1;

- (id)init;
- (unsigned long long)contactManagementConsentStateOfDelegateWithInfo:(id)arg1;
- (id)initWithManagementState:(id)arg1 schedulerProvider:(id)arg2;
- (id)contactManagementConsentStateFutureForDSID:(id)arg1;

@end
