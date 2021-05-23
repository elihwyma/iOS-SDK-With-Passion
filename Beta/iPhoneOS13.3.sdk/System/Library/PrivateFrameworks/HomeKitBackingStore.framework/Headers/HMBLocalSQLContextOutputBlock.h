/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class HMBLocalSQLContext, HMFActivity;

__attribute__((visibility("hidden")))
@interface HMBLocalSQLContextOutputBlock : HMFObject

{
    HMBLocalSQLContext *_owner;
    unsigned long long _zoneRow;
    unsigned long long _blockRow;
    HMFActivity *_activity;
}

@property (weak, nonatomic) HMBLocalSQLContext *owner;
@property (nonatomic) unsigned long long blockRow;
@property (nonatomic, readonly) unsigned long long zoneRow;
@property (nonatomic, readonly) HMFActivity *activity;

+ (id)logCategory;

- (id)abort;
- (id)commit:(id)arg1;
- (id)initWithOwner:(id)arg1 zoneRow:(unsigned long long)arg2 blockRow:(unsigned long long)arg3;
- (id)updateModelID:(id)arg1 modelEncoding:(unsigned long long)arg2 modelData:(id)arg3;

@end
