/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMControlStatusIndicator.h>

@class UILabel;

@protocol CAMVideoConfigurationStatusIndicatorDelegate;

@interface CAMVideoConfigurationStatusIndicator : CAMControlStatusIndicator

{
    id <CAMVideoConfigurationStatusIndicatorDelegate> _touchDelegate;
    long long _resolution;
    long long _framerate;
    UILabel *__resolutionLabel;
    UILabel *__separatorLabel;
    UILabel *__framerateLabel;
    struct CGSize __resolutionSize;
    struct CGSize __separatorSize;
    struct CGSize __framerateSize;
}

@property (nonatomic, readonly) UILabel *_resolutionLabel;
@property (nonatomic, readonly) UILabel *_separatorLabel;
@property (nonatomic, readonly) UILabel *_framerateLabel;
@property (nonatomic) struct CGSize _resolutionSize;
@property (nonatomic) struct CGSize _separatorSize;
@property (nonatomic) struct CGSize _framerateSize;
@property (weak, nonatomic) id <CAMVideoConfigurationStatusIndicatorDelegate> touchDelegate;
@property (nonatomic) long long resolution;
@property (nonatomic) long long framerate;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateAppearance;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (CDStruct_d54ccef3)_labelGeometryForSize:(struct CGSize)arg1 originX:(double)arg2 originY:(double)arg3;
- (void)_handleTouchAtLocation:(struct CGPoint)arg1;
- (id)_resolutionString;
- (id)_separatorString;
- (id)_framerateString;
- (struct CGSize)_sizingForLabel:(id)arg1 minWidth:(double)arg2;
- (_Bool)_togglesResolutionOrFramerateForTouchAtLocation:(struct CGPoint)arg1;
- (_Bool)_togglesResolutionForTouchAtLocation:(struct CGPoint)arg1;
- (_Bool)_togglesFramerateForTouchAtLocation:(struct CGPoint)arg1;
- (_Bool)shouldUseOutline;
- (id)imageNameForCurrentState;

@end
