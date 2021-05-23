/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutGenerator.h>

@class PXMemoriesFeedLayoutMetrics;

@interface PXMemoriesFeedLayoutGenerator : PXLayoutGenerator

{
    _Bool _includeDateHeader;
    _Bool _isFirstHeader;
}

@property (nonatomic) _Bool includeDateHeader;
@property (nonatomic) _Bool isFirstHeader;
@property (copy, nonatomic) PXMemoriesFeedLayoutMetrics *metrics;

- (id)initWithMetrics:(id)arg1;

@end
