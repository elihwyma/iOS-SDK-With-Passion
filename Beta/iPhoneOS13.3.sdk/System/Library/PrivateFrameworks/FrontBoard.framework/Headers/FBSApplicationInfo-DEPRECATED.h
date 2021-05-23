/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoardServices/FBSApplicationInfo.h>

@class NSData;

@interface FBSApplicationInfo (DEPRECATED)

@property (nonatomic, readonly) long long signatureState;
@property (nonatomic, readonly, getter=hasFreeDeveloperProvisioningProfile) _Bool freeDeveloperProvisioningProfile;
@property (nonatomic, readonly, getter=hasUniversalProvisioningProfile) _Bool universalProvisioningProfile;
@property (retain, nonatomic) NSData *cachedCodeDirectoryHash;
@property (nonatomic) unsigned int cachedCodeDirectoryHashType;

- (id)_applicationTrustData;
- (long long)_mapSignatureStateFromTrustState:(unsigned long long)arg1;
- (id)_initForProfileManagerTesting;
- (void)acceptApplicationSignatureIdentity;

@end
