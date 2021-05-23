/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSWPTextMagnifierRanged.h>

@interface TSWPTextMagnifierHorizontalRanged : TSWPTextMagnifierRanged

{
    _Bool _shouldIgnoreTextInputEditor;
}

@property (nonatomic) _Bool shouldIgnoreTextInputEditor;

+ (id)sharedRangedMagnifier;

- (void)dealloc;
- (void)remove;
- (double)currentOffset;
- (void)stopMagnifying:(_Bool)arg1;
- (void)zoomDownAnimation;
- (void)zoomUpAnimation;
- (void)updateFrame;
- (id)initWithDefaultFrame;
- (void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(struct CGPoint)arg2 offset:(struct CGPoint)arg3 animated:(_Bool)arg4;
- (void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)shouldHideCanvasLayer;
- (id)underlayImageName;
- (id)overlayImageName;
- (id)maskImageName;

@end
