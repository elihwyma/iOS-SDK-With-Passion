/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIShadowView : UIView

{
    UIImage *_image;
}

+ (id)topShadowImage;
+ (id)bottomShadowImage;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setShadowImage:(id)arg1 forEdge:(unsigned long long)arg2 inside:(_Bool)arg3;

@end
