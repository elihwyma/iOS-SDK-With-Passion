/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextMagnifier.h>

__attribute__((visibility("hidden")))
@interface UITextMagnifierCaret : UITextMagnifier

{
    double _yOffset;
    struct CGPoint _offset;
}

@property (nonatomic) struct CGPoint offset;

+ (id)sharedCaretMagnifier;
+ (Class)renderClass;
+ (id)activeCaretMagnifier;

- (void)remove;
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint)arg3 offset:(struct CGPoint)arg4 animated:(_Bool)arg5;
- (_Bool)isHorizontal;
- (void)updateFrameAndOffset;
- (void)zoomDownAnimation;
- (void)zoomUpAnimation;
- (_Bool)terminalPointPlacedCarefully;
- (double)offsetFromMagnificationPoint;
- (struct CGPoint)animationPoint;
- (void)setAnimationPoint:(struct CGPoint)arg1;
- (id)initWithFrame;

@end
