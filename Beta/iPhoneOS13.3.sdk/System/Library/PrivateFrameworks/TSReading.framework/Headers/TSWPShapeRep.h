/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDShapeRep.h>

#import <TSReading/Swift-Protocol.h>

@class CALayer, NSObject, NSString, TSWPRep;

@protocol TSDContainerInfo;

@interface TSWPShapeRep : TSDShapeRep <Swift>

{
    _Bool _editingContainedRep;
    CALayer *_overflowGlyphLayer;
    TSWPRep *_containedRep;
}

@property (nonatomic, readonly) TSWPRep *containedRep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<TSDContainerInfo> *containerInfo;

- (void)dealloc;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (_Bool)isInvisible;
- (void)willBeRemoved;
- (_Bool)isDraggable;
- (id)childReps;
- (void)processChangedProperty:(int)arg1;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (_Bool)canSelectChildRep:(id)arg1;
- (void)selectChildRep:(id)arg1;
- (_Bool)canBeginEditingChildRepOnDoubleTap:(id)arg1;
- (void)willBeginEditingContainedRep;
- (void)willEndEditingContainedRep;
- (id)hitReps:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;
- (id)hitRep:(struct CGPoint)arg1;
- (_Bool)wantsToHandleTapsWhenLocked;
- (_Bool)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (id)additionalLayersOverLayer;
- (id)overlayLayers;
- (_Bool)mustDrawTilingLayerOnMainThread:(id)arg1;
- (unsigned long long)enabledKnobMask;
- (_Bool)shouldShowKnobs;
- (_Bool)shouldShowSelectionHighlight;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)updateChildrenFromLayout;
- (_Bool)shouldIgnoreEditMenuTapAtPoint:(struct CGPoint)arg1 withRecognizer:(id)arg2;
- (_Bool)wantsToHandleTapsOnContainingGroup;
- (int)dragTypeAtCanvasPoint:(struct CGPoint)arg1;
- (id)hyperlinkRegions;
- (_Bool)isEditingChildRep;
- (id)p_overflowKnobImage;
- (_Bool)p_shouldShowTextOverflowGlyph;
- (void)p_resetOverflowGlyphLayerIfNecessary;
- (_Bool)shapeLayoutShouldUpdateInstructionalText:(id)arg1;
- (void)shapeLayoutDidChangeContainedStorage:(id)arg1;
- (double)pParagraphAlignmentOffset;

@end
