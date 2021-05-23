/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutMetrics.h>

@class PXMemoriesSpec;

@interface PXMemoriesFeedLayoutMetrics : PXLayoutMetrics

{
    PXMemoriesSpec *_spec;
    struct UIEdgeInsets _contentInsets;
}

@property (retain, nonatomic) PXMemoriesSpec *spec;
@property (nonatomic) struct UIEdgeInsets contentInsets;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
