/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice, NSArray, NTKFaceColorScheme;

@interface NTKActivityDialView : UIView

{
    _Bool _shouldRasterize;
    NTKFaceColorScheme *_colorScheme;
    double _zoomFraction;
    CLKDevice *_device;
    NSArray *_segments;
}

@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) NSArray *segments;
@property (retain, nonatomic) NTKFaceColorScheme *colorScheme;
@property (nonatomic) _Bool shouldRasterize;
@property (nonatomic) double zoomFraction;

- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;
- (double)_handAlphaForEditMode:(long long)arg1;
- (void)applyTransitionFromScheme:(id)arg1 toScheme:(id)arg2 fraction:(double)arg3;
- (double)_segmentAlphaForEditMode:(long long)arg1;

@end
