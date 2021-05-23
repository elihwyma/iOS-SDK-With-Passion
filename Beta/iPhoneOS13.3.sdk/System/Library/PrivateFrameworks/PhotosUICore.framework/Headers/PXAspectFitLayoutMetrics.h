/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXAspectFitLayoutMetrics : PXLayoutMetrics

{
    double _interTileSpacing;
    long long _minTilesPerRow;
    long long _maxTilesPerRow;
    double _minRowAspectRatio;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic) double interTileSpacing;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) long long minTilesPerRow;
@property (nonatomic) long long maxTilesPerRow;
@property (nonatomic) double minRowAspectRatio;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
