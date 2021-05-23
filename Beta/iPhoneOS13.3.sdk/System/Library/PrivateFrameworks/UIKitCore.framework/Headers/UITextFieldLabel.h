/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UILabel.h>

__attribute__((visibility("hidden")))
@interface UITextFieldLabel : UILabel

{
    _Bool _shouldRenderWithoutTextField;
}

@property (nonatomic) _Bool shouldRenderWithoutTextField;

+ (id)defaultFont;
+ (id)_defaultAttributes;

- (void)drawTextInRect:(struct CGRect)arg1;
- (void)_defaultDrawTextInRect:(struct CGRect)arg1;
- (_Bool)_shouldDrawUnderlinesLikeWebKit;

@end
