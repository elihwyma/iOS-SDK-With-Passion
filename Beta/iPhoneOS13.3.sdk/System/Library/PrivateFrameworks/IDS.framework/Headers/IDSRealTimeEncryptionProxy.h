/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class _IDSRealTimeEncryptionProxy;

@interface IDSRealTimeEncryptionProxy : NSObject

{
    _IDSRealTimeEncryptionProxy *_internal;
}

- (void)dealloc;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithAccount:(id)arg1;
- (void)sendPrekeyToGroup:(id)arg1;
- (void)requestPublicKeys;
- (void)sendMasterKeyMaterialToGroup:(id)arg1;
- (void)requestMasterKeyMaterialForGroup:(id)arg1;
- (void)sendMKMRecoveryRequestToGroup:(id)arg1;
- (void)resetKeysForGroup:(id)arg1;

@end
