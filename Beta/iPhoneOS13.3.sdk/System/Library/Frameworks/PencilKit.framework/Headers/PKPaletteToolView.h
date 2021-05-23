/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIControl.h>

@class NSDictionary, NSLayoutConstraint, NSString, UIImageView, UIView, UIViewController;

@interface PKPaletteToolView : UIControl

{
    unsigned long long _edgeLocation;
    double _scalingFactor;
    NSString *_toolIdentifier;
    UIViewController *_attributeViewController;
    NSDictionary *_toolProperties;
    long long _colorUserInterfaceStyle;
    UIView *_toolLargeShadowView;
    NSLayoutConstraint *_imageViewTopAnchorConstraint;
    NSLayoutConstraint *_imageViewBottomAnchorConstraint;
    NSLayoutConstraint *_imageViewLeftAnchorConstraint;
    NSLayoutConstraint *_imageViewRightAnchorConstraint;
    NSLayoutConstraint *_imageViewWidthAnchorConstraint;
    NSLayoutConstraint *_imageViewHeigthAnchorConstraint;
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIView *toolLargeShadowView;
@property (retain, nonatomic) NSLayoutConstraint *imageViewTopAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewBottomAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewLeftAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewRightAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewWidthAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewHeigthAnchorConstraint;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic, readonly) NSString *toolIdentifier;
@property (nonatomic, readonly) UIViewController *attributeViewController;
@property (nonatomic, readonly) NSString *toolName;
@property (copy, nonatomic) NSDictionary *toolProperties;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

+ (id)toolViewWithIdentifier:(id)arg1;

- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)setSelected:(_Bool)arg1;
- (id)initWithToolIdentifier:(id)arg1 toolProperties:(id)arg2;
- (id)initWithToolIdentifier:(id)arg1;
- (double)_toolSelectedOffset;
- (void)_reloadToolImage;
- (void)_updateToolImageShadows;
- (void)_reloadToolImageSizeConstraints;
- (struct CGSize)_smallShadowOffset;
- (struct CGSize)_largeShadowOffset;

@end
