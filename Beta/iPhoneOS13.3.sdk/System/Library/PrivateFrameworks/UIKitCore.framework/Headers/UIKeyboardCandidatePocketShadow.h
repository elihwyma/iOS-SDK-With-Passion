/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionReusableView.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidatePocketShadow : UICollectionReusableView

{
    _Bool _shadowFadesToBottom;
    _Bool _drawsShadow;
    _Bool _showsInDarkBackground;
}

@property (nonatomic) _Bool shadowFadesToBottom;
@property (nonatomic) _Bool drawsShadow;
@property (nonatomic) _Bool showsInDarkBackground;

+ (id)leftShadowImage;
+ (double)widthWithShadow:(_Bool)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)applyLayoutAttributes:(id)arg1;

@end
