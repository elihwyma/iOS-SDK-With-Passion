/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <Foundation/NSObject.h>

@interface PCSShareProtectionObject : NSObject

{
    struct _OpaquePCSShareProtection *_shareProtection;
    struct _PCSIdentityData *_identity;
}

@property (nonatomic, readonly) struct _OpaquePCSShareProtection *shareProtection;

- (void)dealloc;
- (id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData *)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData *)arg1 owner:(void *)arg2 flags:(unsigned int)arg3 error:(id *)arg4;
- (id)initWithShareProtectionRef:(struct _OpaquePCSShareProtection *)arg1;
- (id)initWithSharingRequestData:(id)arg1 identitySet:(struct _PCSIdentitySetData *)arg2 error:(id *)arg3;
- (id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData *)arg1 error:(id *)arg2;
- (id)exportAcceptedSharingRequestWithError:(id *)arg1;

@end
