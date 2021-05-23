/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLVirtualResource.h>

@class NSNumber;

@interface PLAdjustmentVirtualResource : PLVirtualResource

{
    struct os_unfair_lock_s _lock;
    NSNumber *_cachedDataLength;
}

@property (nonatomic) struct os_unfair_lock_s lock;
@property (copy, nonatomic) NSNumber *cachedDataLength;

- (long long)dataLength;
- (long long)estimatedDataLength;
- (id)initWithAdjustmentFilePath:(id)arg1 forAsset:(id)arg2;
- (id)adjustmentDictionary;

@end
