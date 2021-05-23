/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class HMBLocalSQLContextInputBlock, HMBLocalZone, HMFActivity, NSString;

@interface HMBMirrorInput : HMFObject

{
    HMBLocalZone *_localZone;
    HMBLocalSQLContextInputBlock *_block;
    HMFActivity *_activity;
}

@property (weak, nonatomic, readonly) HMBLocalZone *localZone;
@property (nonatomic, readonly) HMBLocalSQLContextInputBlock *block;
@property (nonatomic, readonly) HMFActivity *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (id)abort;
- (id)logIdentifier;
- (id)initWithLocalZone:(id)arg1 block:(id)arg2;
- (id)updateModel:(id)arg1 externalID:(id)arg2 externalData:(id)arg3;
- (id)updateModelData:(id)arg1 modelEncoding:(unsigned long long)arg2 externalID:(id)arg3 externalData:(id)arg4;
- (id)removeModelWithModelID:(id)arg1;
- (id)removeModelWithExternalID:(id)arg1;
- (id)commitWithOptions:(id)arg1 error:(id *)arg2;

@end
