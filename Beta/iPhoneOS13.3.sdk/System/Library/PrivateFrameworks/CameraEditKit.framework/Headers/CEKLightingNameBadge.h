/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <CameraEditKit/CEKBadgeTextView.h>

@class UIView;

@interface CEKLightingNameBadge : CEKBadgeTextView

{
    _Bool _highlighted;
    long long _lightingType;
    UIView *__snapshotView;
}

@property (retain, nonatomic, setter=_setSnapshotView:) UIView *_snapshotView;
@property (nonatomic) long long lightingType;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateText;
- (void)_updateColorsAnimated:(_Bool)arg1;

@end
