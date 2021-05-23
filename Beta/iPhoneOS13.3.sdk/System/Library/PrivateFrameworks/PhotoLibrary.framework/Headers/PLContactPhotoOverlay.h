/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, UIImageView, UILabel;

@interface PLContactPhotoOverlay : UIView

{
    UILabel *_titleLabel;
    UIImageView *__avatarPreview;
    CAShapeLayer *_circularLayer;
}

@property (nonatomic, readonly) UIImageView *_avatarPreview;
@property (retain, nonatomic) CAShapeLayer *circularLayer;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) struct UIEdgeInsets overlayEdgeInsets;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_commonPLContactPhotoOverlayInitialization;
- (struct CGRect)inscribingBounds;
- (void)beginAvatarTrackingFromImageView:(id)arg1;
- (void)endAvatarTracking;

@end
