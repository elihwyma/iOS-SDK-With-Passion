/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <CloudKit/CKRecord.h>

@class NSString;

@interface CKRecord (HMB)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)recordFromExternalData:(id)arg1 error:(id *)arg2;
+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;

- (id)hmbDescription;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;
- (void)hmbSetObject:(id)arg1 forKey:(id)arg2 encrypted:(_Bool)arg3;
- (id)hmbObjectForKey:(id)arg1 encrypted:(_Bool)arg2;
- (id)externalID:(id *)arg1;
- (id)externalData:(id *)arg1;

@end
