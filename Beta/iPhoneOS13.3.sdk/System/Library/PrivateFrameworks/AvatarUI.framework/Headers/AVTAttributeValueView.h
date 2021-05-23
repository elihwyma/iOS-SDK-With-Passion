/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIView.h>

#import <AvatarUI/Swift-Protocol.h>

@class CALayer, CAShapeLayer, NSString, NSUUID, UIImage, UILabel;

@interface AVTAttributeValueView : UIView <Swift>

{
    _Bool _showPlaceholder;
    CDUnknownBlockType discardableContentHandler;
    UIImage *_image;
    CALayer *_imageLayer;
    unsigned long long _selectionStyle;
    NSUUID *_displaySessionUUID;
    CAShapeLayer *_clippingLayer;
    CAShapeLayer *_selectionLayer;
    CALayer *_transitionImageLayer;
    UILabel *_titleLabel;
    struct CGSize _imageSizeRatio;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) CAShapeLayer *clippingLayer;
@property (retain, nonatomic) CAShapeLayer *selectionLayer;
@property (retain, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) CALayer *transitionImageLayer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) struct CGSize imageSizeRatio;
@property (nonatomic) unsigned long long selectionStyle;
@property (retain, nonatomic) NSUUID *displaySessionUUID;
@property (retain, nonatomic) NSString *displayedTitle;
@property (nonatomic) _Bool showPlaceholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType discardableContentHandler;

+ (struct CGRect)imageViewRectForBounds:(struct CGRect)arg1 imageSizeRatio:(struct CGSize)arg2 scale:(double)arg3;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)selectionBezierPath;
- (void)updateWithImage:(id)arg1;
- (void)discardContent;
- (void)updateSelectedState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForTransitionToImage:(id)arg1;
- (void)cleanupAfterTransition;
- (void)updateHighlightedState:(_Bool)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)configureImageLayer:(id)arg1;
- (struct CGRect)shapeLayerRect;
- (id)clippingBezierPath;
- (void)updateSelectionLayer;
- (void)relayoutSublayers;
- (void)updateCornerRadii;
- (struct CGRect)selectorRect;
- (void)bringSelectionLayersToFront;
- (id)fromLayer;
- (id)toLayer;

@end
