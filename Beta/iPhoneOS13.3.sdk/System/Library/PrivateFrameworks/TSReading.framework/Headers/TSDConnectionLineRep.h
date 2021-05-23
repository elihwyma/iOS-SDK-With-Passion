/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDShapeRep.h>

@class TSDPathSource;

@interface TSDConnectionLineRep : TSDShapeRep

{
    TSDPathSource *mLastPathSource;
}

+ (_Bool)canConnectToRep:(id)arg1;
+ (id)infosToConnectFromSelection:(id)arg1 withInteractiveCanvasController:(id)arg2;

- (void)dealloc;
- (_Bool)isSelectable;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (_Bool)isDraggable;
- (_Bool)directlyManagesLayerContent;
- (struct CGRect)targetRectForEditMenu;
- (_Bool)shouldCreateKnobs;
- (unsigned long long)enabledKnobMask;
- (_Bool)shouldCreateSelectionKnobs;
- (_Bool)shouldShowCommentHighlight;
- (double)shortestDistanceToPoint:(struct CGPoint)arg1 countAsHit:(_Bool *)arg2;
- (id)additionalRepsForDragging;
- (void)updateFromLayout;
- (_Bool)canUseSpecializedHitRegionForKnob:(id)arg1;
- (struct CGPoint)i_dragOffset;
- (_Bool)i_editMenuOverlapsEndKnobs;
- (_Bool)shouldShowSmartShapeKnobs;
- (_Bool)canBeUsedForImageMask;
- (_Bool)canMakePathEditable;
- (_Bool)canConnectToRep:(id)arg1;
- (id)connectionLineLayout;
- (_Bool)p_isConnected;
- (_Bool)p_isConnectedToLockedObjects;
- (_Bool)p_controlKnobVisible;

@end
