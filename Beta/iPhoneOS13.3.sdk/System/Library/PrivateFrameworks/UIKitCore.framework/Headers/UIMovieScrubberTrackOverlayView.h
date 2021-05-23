/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface UIMovieScrubberTrackOverlayView : UIView

{
    double _value;
    double _minimumValue;
    double _maximumValue;
    double _startValue;
    double _endValue;
    UIImageView *_leftFillView;
    UIImageView *_rightFillView;
    unsigned int _editingHandle;
    unsigned int _editing:1;
    unsigned int _zoomed:1;
}

- (void)setValue:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setEditing:(_Bool)arg1;
- (void)animateFillFramesAway;
- (void)setStartValue:(double)arg1;
- (void)setEndValue:(double)arg1;
- (void)setEditingHandle:(int)arg1;
- (void)setMinimumValue:(double)arg1;
- (void)setMaximumValue:(double)arg1;
- (void)setIsZoomed:(_Bool)arg1;
- (void)_clampValueAndLayout;
- (void)_updateLeftFill;
- (void)_updateRightFill;

@end
