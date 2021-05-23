/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@interface UIPopoverBackgroundView : UIView

{
    _Bool __chromeHidden;
}

@property (nonatomic, setter=_setChromeHidden:) _Bool _chromeHidden;
@property (nonatomic) double arrowOffset;
@property (nonatomic) unsigned long long arrowDirection;

+ (double)cornerRadius;
+ (double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)arg1;
+ (struct UIEdgeInsets)contentViewInsets;
+ (double)arrowHeight;
+ (double)arrowBase;
+ (_Bool)wantsDefaultContentAppearance;

- (struct CGSize)_shadowOffset;
- (id)_shadowPath;
- (void)layoutSubviews;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (double)_shadowRadius;
- (double)_shadowOpacity;
- (struct UIEdgeInsets)_contentViewInsets;
- (struct UIEdgeInsets)_contentViewInsetsForArrowDirection:(unsigned long long)arg1;
- (long long)backgroundStyle;
- (void)_updateChrome;
- (struct UIEdgeInsets)_shadowInsets;
- (id)_shadowPathForRect:(struct CGRect)arg1 arrowDirection:(unsigned long long)arg2;
- (struct CGRect)_backgroundContentViewFrame;
- (void)_updateShadow;
- (struct CGRect)_contentViewFrame;

@end
