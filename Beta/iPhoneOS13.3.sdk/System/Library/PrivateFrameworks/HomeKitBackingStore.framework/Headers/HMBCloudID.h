/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/Swift-Protocol.h>

@class CKContainerID, NSString, NSUUID;

@interface HMBCloudID : HMFObject <Swift>

{
    CKContainerID *_containerID;
    long long _scope;
    NSString *_name;
    NSUUID *_modelID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CKContainerID *containerID;
@property (nonatomic, readonly) long long scope;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSUUID *modelID;

+ (_Bool)supportsSecureCoding;
+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)attributeDescriptions;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithContainerID:(id)arg1 scope:(long long)arg2 name:(id)arg3 modelID:(id)arg4;
- (id)initWithContainerID:(id)arg1 scope:(long long)arg2;

@end
