/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class FBSApplicationInfo, NSArray;

@protocol OS_dispatch_queue;

@interface FBApplicationTrustData : NSObject

{
    FBSApplicationInfo *_appInfo;
    _Bool _hasUniversalProvisioningProfile;
    _Bool _hasFreeDeveloperProvisioningProfile;
    _Bool _isManaged;
    NSArray *_provisioningProfiles;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, readonly) NSArray *profiles;

- (unsigned long long)trustState;
- (id)_initWithApplicationInfo:(id)arg1 andProvisioningProfiles:(id)arg2 isManaged:(_Bool)arg3;
- (void)acknowledgeTrust;
- (void)_initializeProfiles:(id)arg1;
- (void)_acceptApplicationSignatureIdentity;
- (unsigned long long)trustStateWithTrustRequiredReasons:(unsigned long long *)arg1;
- (id)_workQueue_expirationDateForProvisioningProfile;
- (_Bool)_workQueue_signatureNeedsExplicitUserTrust;

@end
