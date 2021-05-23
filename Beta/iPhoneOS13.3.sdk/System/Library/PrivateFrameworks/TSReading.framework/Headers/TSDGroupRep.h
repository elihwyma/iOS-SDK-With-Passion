/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDContainerRep.h>

@interface TSDGroupRep : TSDContainerRep

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;

- (_Bool)containsPoint:(struct CGPoint)arg1;
- (Class)layerClass;
- (void)setNeedsDisplay;
- (struct CGColor *)selectionHighlightColor;
- (void)drawInContext:(struct CGContext *)arg1;
- (_Bool)isDraggable;
- (_Bool)directlyManagesLayerContent;
- (struct CGPoint)convertNaturalPointFromUnscaledCanvas:(struct CGPoint)arg1;
- (struct CGRect)frameInUnscaledCanvas;
- (void)processChangedProperty:(int)arg1;
- (_Bool)wantsToHandleTapsWhenLocked;
- (_Bool)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (_Bool)handleDoubleTapAtPoint:(struct CGPoint)arg1;
- (_Bool)containsPoint:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;
- (struct CGRect)clipRect;
- (void)recursivelyDrawInContext:(struct CGContext *)arg1;
- (_Bool)shouldShowCommentHighlight;
- (_Bool)shouldShowSelectionHighlight;
- (_Bool)intersectsUnscaledRect:(struct CGRect)arg1;
- (id)allRepsContainedInGroup;

@end
