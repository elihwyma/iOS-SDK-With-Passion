/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBProcessingModelResult.h>

@class HMBModel;

@interface HMBProcessingModelUpdate : HMBProcessingModelResult

{
    HMBModel *_previousModel;
}

@property (readonly) HMBModel *previousModel;

- (id)attributeDescriptions;
- (id)initWithModel:(id)arg1 previousModel:(id)arg2 options:(id)arg3 mirrorOutputFuture:(id)arg4;

@end
