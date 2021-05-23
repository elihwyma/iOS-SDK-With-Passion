/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface PXLivePhotoTrimScrubberSpec : NSObject

{
    _Bool _fallbackToKeyTimeTracking;
    _Bool _fallbackToPlayheadTracking;
    _Bool _useMiniScrubberHeight;
    double _scrubberHeight;
    double _handleTouchDistance;
    double _handleWidth;
    double _handleHeight;
    double _handleAnchorX;
    double _loupeOuterCornerRadius;
    double _loupeInnerCornerRadius;
    double _filmstripCornerRadius;
    UIColor *_disabledOverlayColor;
    struct UIEdgeInsets _filmstripViewInsets;
}

@property (nonatomic) double scrubberHeight;
@property (nonatomic) double handleTouchDistance;
@property (nonatomic) double handleWidth;
@property (nonatomic) double handleHeight;
@property (nonatomic) double handleAnchorX;
@property (nonatomic) struct UIEdgeInsets filmstripViewInsets;
@property (nonatomic) double loupeOuterCornerRadius;
@property (nonatomic) double loupeInnerCornerRadius;
@property (nonatomic) double filmstripCornerRadius;
@property (retain, nonatomic) UIColor *disabledOverlayColor;
@property (nonatomic) _Bool fallbackToKeyTimeTracking;
@property (nonatomic) _Bool fallbackToPlayheadTracking;
@property (nonatomic) _Bool useMiniScrubberHeight;

- (id)init;
- (void)_updateScrubberHeight;

@end
