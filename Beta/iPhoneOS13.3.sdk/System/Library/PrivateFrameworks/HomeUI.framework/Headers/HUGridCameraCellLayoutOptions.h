/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUGridCellLayoutOptions.h>

@interface HUGridCameraCellLayoutOptions : HUGridCellLayoutOptions

{
    double _headerViewHeight;
    double _cameraViewAspectRatio;
    double _headerHorizontalInnerMargins;
    double _cellHeight;
}

@property (nonatomic) double headerViewHeight;
@property (nonatomic) double cameraViewAspectRatio;
@property (nonatomic) double headerHorizontalInnerMargins;
@property (nonatomic) double cellHeight;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
