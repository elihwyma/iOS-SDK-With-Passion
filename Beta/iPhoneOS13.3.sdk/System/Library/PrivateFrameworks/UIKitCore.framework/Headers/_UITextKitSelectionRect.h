/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextSelectionRect.h>

__attribute__((visibility("hidden")))
@interface _UITextKitSelectionRect : UITextSelectionRect

{
    _Bool _containsEnd;
    _Bool _containsStart;
    _Bool _vertical;
    _Bool __drawsOwnHighlight;
    struct CGRect _rect;
}

@property (nonatomic, readonly) struct CGRect rect;
@property (nonatomic) _Bool containsStart;
@property (nonatomic) _Bool containsEnd;
@property (nonatomic, getter=isVertical) _Bool vertical;
@property (nonatomic, setter=_setDrawsOwnHighlight:) _Bool _drawsOwnHighlight;

+ (id)selectionRectWithRect:(struct CGRect)arg1 fromView:(id)arg2;

- (id)description;
- (long long)writingDirection;
- (void)setRect:(struct CGRect)arg1 fromView:(id)arg2;

@end
