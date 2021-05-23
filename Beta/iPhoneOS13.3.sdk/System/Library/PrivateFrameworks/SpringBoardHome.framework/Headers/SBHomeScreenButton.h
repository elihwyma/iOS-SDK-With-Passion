/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIButton.h>

@class SBHomeScreenMaterialView, UIView;

@interface SBHomeScreenButton : UIButton

{
    SBHomeScreenMaterialView *_materialView;
}

@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) SBHomeScreenMaterialView *materialView;

+ (struct UIEdgeInsets)backgroundInsets;
+ (id)defaultContentImage;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 backgroundView:(id)arg2;

@end
