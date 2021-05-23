/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXMemoriesFeedLayoutMetrics.h>

@interface PXMemoriesFeedWidgetLayoutMetrics : PXMemoriesFeedLayoutMetrics

{
    unsigned long long _numberOfColumns;
    unsigned long long _numberOfRows;
    long long _layoutAxis;
    struct CGSize _interitemSpacing;
}

@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) unsigned long long numberOfRows;
@property (nonatomic) struct CGSize interitemSpacing;
@property (nonatomic) long long layoutAxis;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
