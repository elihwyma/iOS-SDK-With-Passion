/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextSelectionRect.h>

__attribute__((visibility("hidden")))
@interface _UITextSelectionCaretRect : UITextSelectionRect

{
    struct CGRect _rect;
}

+ (id)selectionRectWithRect:(struct CGRect)arg1;

- (_Bool)isVertical;
- (_Bool)containsStart;
- (_Bool)containsEnd;
- (struct CGRect)rect;
- (long long)writingDirection;

@end
