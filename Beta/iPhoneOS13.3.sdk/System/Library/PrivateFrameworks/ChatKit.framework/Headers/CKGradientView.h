/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class CATransformLayer, CKBaseLayer, NSArray, UIImage;

@protocol CKGradientReferenceView;

@interface CKGradientView : UIView

{
    UIView<CKGradientReferenceView> *_referenceView;
    NSArray *_colors;
    UIImage *_maskImage;
    CKBaseLayer *_gradientLayer;
    CATransformLayer *_trackingLayer;
    struct CGRect _gradientFrame;
}

@property (retain, nonatomic) CKBaseLayer *gradientLayer;
@property (nonatomic) struct CGRect gradientFrame;
@property (retain, nonatomic) CATransformLayer *trackingLayer;
@property (weak, nonatomic) UIView<CKGradientReferenceView> *referenceView;
@property (retain, nonatomic) NSArray *colors;
@property (retain, nonatomic) UIImage *maskImage;
@property (nonatomic, readonly) UIImage *gradient;

+ (id)gradientViews;

- (void)dealloc;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)_removeAllAnimations:(_Bool)arg1;
- (void)ckLayerDidBecomeVisible:(_Bool)arg1;
- (void)updateAnimation;
- (void)updateGradientImage;

@end
