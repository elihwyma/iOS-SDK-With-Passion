/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBCloudID.h>

@class CKRecordZoneID, NSArray, NSData, NSString;

@interface HMBCloudZoneID : HMBCloudID

{
    NSData *_token;
    CKRecordZoneID *_zoneID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) CKRecordZoneID *zoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *labels;
@property (nonatomic, readonly) NSData *token;
@property (nonatomic, readonly) NSString *name;

+ (_Bool)supportsSecureCoding;
+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithContainerID:(id)arg1 scope:(long long)arg2 zoneID:(id)arg3;
- (id)initWithContainerID:(id)arg1 scope:(long long)arg2 zoneID:(id)arg3 name:(id)arg4 modelID:(id)arg5;

@end
