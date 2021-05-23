/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class HMBLocalSQLContext, HMFActivity, NSString;

@interface HMBLocalSQLContextInputBlock : HMFObject

{
    unsigned long long _blockRow;
    HMFActivity *_activity;
    HMBLocalSQLContext *_owner;
    unsigned long long _zoneRow;
    unsigned long long _type;
}

@property (weak, nonatomic) HMBLocalSQLContext *owner;
@property (nonatomic) unsigned long long blockRow;
@property (nonatomic, readonly) unsigned long long zoneRow;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) HMFActivity *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (id)abort;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (id)commit:(id)arg1;
- (id)updateExternalID:(id)arg1 externalData:(id)arg2 modelEncoding:(unsigned long long)arg3 modelData:(id)arg4;
- (id)initWithOwner:(id)arg1 zoneRow:(unsigned long long)arg2 blockRow:(unsigned long long)arg3 type:(unsigned long long)arg4;
- (id)insertExternalID:(id)arg1 externalData:(id)arg2 modelEncoding:(unsigned long long)arg3 modelData:(id)arg4;

@end
