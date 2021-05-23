/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIPreviewPresentationEffectView : UIView

{
    _Bool _shouldRasterizeForTransition;
    UIColor *_shadowColor;
}

@property (nonatomic) double blurRadius;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) struct CGSize shadowOffset;
@property (nonatomic) double shadowRadius;
@property (copy, nonatomic) UIColor *shadowColor;
@property (nonatomic) _Bool shouldRasterizeForTransition;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;

@end
