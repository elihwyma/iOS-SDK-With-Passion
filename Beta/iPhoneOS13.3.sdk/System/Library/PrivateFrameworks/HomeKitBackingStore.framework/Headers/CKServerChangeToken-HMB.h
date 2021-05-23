/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <CloudKit/CKServerChangeToken.h>

@class NSString;

@interface CKServerChangeToken (HMB)

@property (copy, readonly) NSString *hmbDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;

- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;

@end
