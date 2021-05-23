/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface VSDevice : NSObject

{
    CDUnknownFunctionPointerType _copyAnswer;
    NSOperationQueue *_privateQueue;
}

@property (nonatomic) CDUnknownFunctionPointerType copyAnswer;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (nonatomic, readonly, getter=isRunningAnInternalBuild) _Bool runningAnInternalBuild;
@property (nonatomic, readonly, getter=isRunningACustomerBuild) _Bool runningACustomerBuild;
@property (nonatomic, readonly) unsigned long long deviceType;

+ (id)currentDevice;
+ (_Bool)_getMobileGestaltBoolean:(struct __CFString *)arg1 withCopyAnswer:(CDUnknownFunctionPointerType)arg2;
+ (_Bool)_runningAnInternalBuildWithCopyAnswer:(CDUnknownFunctionPointerType)arg1;
+ (_Bool)_runningACustomerBuildWithCopyAnswer:(CDUnknownFunctionPointerType)arg1;
+ (unsigned long long)_deviceTypeWithCopyAnswer:(CDUnknownFunctionPointerType)arg1;

- (id)init;
- (void)fetchDeviceManagedSetTopBoxProfileWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSetTopBoxProfileWithCompletion:(CDUnknownBlockType)arg1;
- (id)developerIdentityProviderDeletionConfirmationMessage;
- (id)accountDeletionConfirmationMessageForIdentityProviderDisplayName:(id)arg1;

@end
