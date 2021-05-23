/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIControl.h>

@class NSString, UIImage, UIImageView;

@interface _PKInkThicknessButton : UIControl

{
    NSString *_inkIdentifier;
    double _weight;
    UIImageView *_inkImageView;
    UIImage *_assetImage;
    struct CGRect _lastRenderedBounds;
}

@property (retain, nonatomic) UIImageView *inkImageView;
@property (nonatomic) struct CGRect lastRenderedBounds;
@property (retain, nonatomic) UIImage *assetImage;
@property (nonatomic, readonly) NSString *inkIdentifier;
@property (nonatomic, readonly) double weight;

+ (struct CGSize)buttonSize;
+ (id)backgroundColorForIsSelected:(_Bool)arg1 highlighted:(_Bool)arg2;
+ (id)imageTintColorForIsSelected:(_Bool)arg1 highlighted:(_Bool)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithInkIdentifier:(id)arg1 weight:(double)arg2;
- (void)didTouchUpInside;
- (void)_animateToHighlightedState:(_Bool)arg1;

@end
