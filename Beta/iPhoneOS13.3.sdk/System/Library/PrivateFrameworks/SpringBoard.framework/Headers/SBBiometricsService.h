/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBServiceClientAuthenticator, NSString, SBUIBiometricResource;

@interface SBBiometricsService : NSObject

{
    SBUIBiometricResource *_biometricResource;
    FBServiceClientAuthenticator *_unlockCredentialAuthenticator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 fetchUnlockCredentialSet:(CDUnknownBlockType)arg3;

@end
