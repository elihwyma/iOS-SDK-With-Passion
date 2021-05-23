/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <UIKit/UIControl.h>

@class MPUTransportButtonEventHandler, NSString, UIButton, UIColor, UIImage, UIImageView;

@interface MPUHalfTintedTransportButton : UIControl

{
    UIButton *_regularButton;
    UIButton *_tintedButton;
    MPUTransportButtonEventHandler *_transportButtonEventHandler;
    UIImage *_regularImage;
    UIColor *_regularImageColor;
    UIImage *_tintedImage;
}

@property (nonatomic, readonly, getter=_regularButton) UIButton *regularButton;
@property (nonatomic, readonly, getter=_tintedButton) UIButton *tintedButton;
@property (retain, nonatomic) UIImage *regularImage;
@property (nonatomic) double regularImageAlpha;
@property (retain, nonatomic) UIColor *regularImageColor;
@property (nonatomic, readonly) UIImageView *regularImageView;
@property (retain, nonatomic) UIImage *tintedImage;
@property (nonatomic) double tintedImageAlpha;
@property (retain, nonatomic) UIColor *tintedImageColor;
@property (nonatomic, readonly) UIImageView *tintedImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) MPUTransportButtonEventHandler *transportButtonEventHandler;
@property (nonatomic) _Bool adjustsImageWhenHighlighted;
@property (nonatomic) long long transportButtonImageViewContentMode;

- (void)setEnabled:(_Bool)arg1;
- (_Bool)isEnabled;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)_newButton;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)shouldTrack;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)applyTransportButtonLayoutAttributes:(CDStruct_b7523c42)arg1;
- (_Bool)wantsCustomHighlightAppearance;
- (_Bool)_shouldForwardSelectedState;
- (void)_updateRegularImage;
- (void)_applyImage:(id)arg1 toButton:(id)arg2;

@end
