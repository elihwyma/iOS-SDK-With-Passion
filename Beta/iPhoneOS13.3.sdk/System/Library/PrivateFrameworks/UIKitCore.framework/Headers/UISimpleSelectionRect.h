/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextSelectionRect.h>

__attribute__((visibility("hidden")))
@interface UISimpleSelectionRect : UITextSelectionRect

{
    struct CGRect _rect;
}

@property (nonatomic) struct CGRect rect;

+ (id)rectWithCGRect:(struct CGRect)arg1;

@end
