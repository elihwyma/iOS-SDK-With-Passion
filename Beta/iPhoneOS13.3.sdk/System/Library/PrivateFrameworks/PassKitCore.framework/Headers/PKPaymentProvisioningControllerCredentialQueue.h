/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSMutableArray;

@interface PKPaymentProvisioningControllerCredentialQueue : NSObject

{
    NSMutableArray *_credentials;
    NSMutableArray *_completedCredentials;
    unsigned long long _currentIndex;
}

- (id)init;
- (unsigned long long)count;
- (unsigned long long)completedCount;
- (void)setCredentialsToProvision:(id)arg1;
- (void)removeCredential:(id)arg1;
- (id)nextCredentialToProvision;
- (void)setCurrentCredential:(id)arg1;
- (unsigned long long)remaining;

@end
