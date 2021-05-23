/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class HMBModel, HMBProcessingOptions, NAFuture;

@interface HMBProcessingModelResult : HMFObject

{
    HMBModel *_model;
    HMBProcessingOptions *_options;
    NAFuture *_mirrorOutputFuture;
}

@property (readonly) HMBModel *model;
@property (readonly) HMBProcessingOptions *options;
@property (readonly) NAFuture *mirrorOutputFuture;

+ (id)alloc;

- (id)attributeDescriptions;
- (id)initWithModel:(id)arg1 options:(id)arg2 mirrorOutputFuture:(id)arg3;

@end
