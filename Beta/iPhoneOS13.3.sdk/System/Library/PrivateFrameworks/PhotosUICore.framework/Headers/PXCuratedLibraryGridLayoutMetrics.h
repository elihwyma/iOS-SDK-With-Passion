/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXCuratedLibraryGridLayoutMetrics : PXLayoutMetrics

{
    long long _numberOfColumns;
    double _itemAspectRatio;
    double _headerAspectRatio;
    double _screenScale;
    double _interitemSpacing;
    long long _style;
    long long _numberOfPrecedingAssets;
    struct UIEdgeInsets _padding;
}

@property (nonatomic) long long numberOfColumns;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) double itemAspectRatio;
@property (nonatomic) double headerAspectRatio;
@property (nonatomic) double screenScale;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) long long style;
@property (nonatomic) long long numberOfPrecedingAssets;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
