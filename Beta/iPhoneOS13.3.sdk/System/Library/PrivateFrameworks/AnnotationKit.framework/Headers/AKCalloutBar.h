/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIView.h>

@class NSArray, UIImageView, _UIBackdropView;

@interface AKCalloutBar : UIView

{
    double _arrowX;
    _Bool _up;
    NSArray *_controls;
    _UIBackdropView *_backgroundView;
    _UIBackdropView *_separatorBackgroundView;
    UIImageView *_blurMaskView;
    UIImageView *_tintMaskView;
    UIImageView *_separatorMaskView;
    struct CGRect _highlightRect;
}

@property (nonatomic) double arrowX;
@property (nonatomic) _Bool up;
@property (retain, nonatomic) NSArray *controls;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 forControl:(id)arg2;
- (struct CGSize)sizeThatFitsControls:(id)arg1;
- (void)setBlurDisabled:(_Bool)arg1;
- (id)newMaskView:(long long)arg1;
- (struct CGRect)dividerLineRectForControl:(long long)arg1;

@end
