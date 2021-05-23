/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <NSObject.h>

@class BKDeviceDescriptor, BiometricKitXPCClient, NSString;

@protocol BKDeviceDelegate, OS_dispatch_queue;

@interface BKDevice : NSObject

{
    BiometricKitXPCClient *_xpcClient;
    id <BKDeviceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    BKDeviceDescriptor *_descriptor;
}

@property (retain, nonatomic) BKDeviceDescriptor *descriptor;
@property (weak, nonatomic) id <BKDeviceDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)deviceWithDescriptor:(id)arg1 error:(id *)arg2;
+ (_Bool)deviceAvailableWithError:(id *)arg1;
+ (_Bool)lockoutState:(long long *)arg1 fromDeviceLockoutState:(long long)arg2 error:(id *)arg3;
+ (_Bool)extendedLockoutState:(long long *)arg1 fromDeviceLockoutState:(long long)arg2 error:(id *)arg3;
+ (_Bool)biometryAvailabilityInfo:(long long *)arg1 fromDeviceInfo:(long long)arg2 error:(id *)arg3;

- (void)dealloc;
- (id)dispatchQueue;
- (_Bool)bioLockoutState:(long long *)arg1 forUser:(unsigned int)arg2 error:(id *)arg3;
- (id)identitiesWithError:(id *)arg1;
- (id)maxIdentityCountWithError:(id *)arg1;
- (_Bool)updateIdentity:(id)arg1 error:(id *)arg2;
- (_Bool)removeIdentity:(id)arg1 error:(id *)arg2;
- (_Bool)isDelegate;
- (id)identitiesForUser:(unsigned int)arg1 error:(id *)arg2;
- (void)enrollResult:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
- (void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)statusMessage:(unsigned int)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)homeButtonPressed:(unsigned long long)arg1;
- (void)touchIDButtonPressed:(_Bool)arg1 client:(unsigned long long)arg2;
- (void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2;
- (id)createEnrollOperationWithError:(id *)arg1;
- (id)createMatchOperationWithError:(id *)arg1;
- (id)createPresenceDetectOperationWithError:(id *)arg1;
- (id)protectedConfigurationForUser:(unsigned int)arg1 error:(id *)arg2;
- (id)effectiveProtectedConfigurationForUser:(unsigned int)arg1 error:(id *)arg2;
- (id)systemProtectedConfigurationWithError:(id *)arg1;
- (_Bool)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 credentialSet:(id)arg3 error:(id *)arg4;
- (_Bool)setSystemProtectedConfiguration:(id)arg1 credentialSet:(id)arg2 error:(id *)arg3;
- (_Bool)extendedBioLockoutState:(long long *)arg1 forUser:(unsigned int)arg2 error:(id *)arg3;
- (id)identitiesDatabaseUUIDForUser:(unsigned int)arg1 error:(id *)arg2;
- (id)identitiesDatabaseHashForUser:(unsigned int)arg1 error:(id *)arg2;
- (_Bool)dropAllUnlockTokensWithError:(id *)arg1;
- (_Bool)forceBioLockoutForAllUsersWithError:(id *)arg1;
- (_Bool)forceBioLockoutForUser:(unsigned int)arg1 error:(id *)arg2;
- (_Bool)forceBioLockoutIfLockedForUser:(unsigned int)arg1 error:(id *)arg2;
- (id)identityForUUID:(id)arg1 error:(id *)arg2;
- (_Bool)removeAllIdentitiesForUser:(unsigned int)arg1 error:(id *)arg2;
- (id)freeIdentityCountForUser:(unsigned int)arg1 error:(id *)arg2;
- (_Bool)biometryAvailability:(long long *)arg1 forUser:(unsigned int)arg2 error:(id *)arg3;
- (id)lastMatchEventWithError:(id *)arg1;

@end
