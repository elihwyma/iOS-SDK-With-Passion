/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class CUTWeakReference, NSString;

@protocol OS_dispatch_queue;

@interface _IDSRealTimeEncryptionProxy : NSObject

{
    NSString *_uniqueID;
    NSString *_accountID;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithAccount:(id)arg1;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;
- (void)sendPrekeyToGroup:(id)arg1;
- (void)requestPublicKeys;
- (void)sendMasterKeyMaterialToGroup:(id)arg1;
- (void)requestMasterKeyMaterialForGroup:(id)arg1;
- (void)sendMKMRecoveryRequestToGroup:(id)arg1;
- (void)resetKeysForGroup:(id)arg1;

@end
