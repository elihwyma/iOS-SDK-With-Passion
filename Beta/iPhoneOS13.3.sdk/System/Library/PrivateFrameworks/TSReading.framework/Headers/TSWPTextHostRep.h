/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDRep.h>

#import <TSReading/Swift-Protocol.h>

@class NSArray, NSObject, NSString, TSKHighlightArrayController, TSWPShapeRep;

@protocol TSDContainerInfo, TSKSearchReference;

@interface TSWPTextHostRep : TSDRep <Swift>

{
    TSWPShapeRep *_editingRep;
    TSKHighlightArrayController *_pulseArrayController;
    TSKHighlightArrayController *_highlightArrayController;
    NSObject<TSKSearchReference> *_activeSearchReference;
    NSArray *_searchReferences;
}

@property (retain, nonatomic) TSKHighlightArrayController *pulseArrayController;
@property (retain, nonatomic) TSKHighlightArrayController *highlightArrayController;
@property (retain, nonatomic) NSObject<TSKSearchReference> *activeSearchReference;
@property (nonatomic, readonly) _Bool useFindOverlayers;
@property (retain, nonatomic) NSArray *searchReferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<TSDContainerInfo> *containerInfo;

- (void)dealloc;
- (void)willBeRemoved;
- (id)childReps;
- (void)pulseAnimationDidStop:(id)arg1;
- (struct CGPath *)newPathForSearchReference:(id)arg1;
- (id)imageForSearchReference:(id)arg1 forPath:(struct CGPath *)arg2 shouldPulsate:(_Bool)arg3;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (_Bool)canSelectChildRep:(id)arg1;
- (void)selectChildRep:(id)arg1;
- (id)hitRep:(struct CGPoint)arg1;
- (id)overlayLayers;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)updateChildrenFromLayout;
- (void)p_activeFindHighlightChangedNotification:(id)arg1;
- (void)p_findUIStateChangedNotification:(id)arg1;
- (void)p_setActiveSearchReference:(id)arg1;
- (void)p_setSearchReferencesToHighlight:(id)arg1;
- (void)setPulseControllerActive:(_Bool)arg1 autohide:(_Bool)arg2;
- (_Bool)doesRepContainSearchReference:(id)arg1;
- (void)updateFindAnimationWithAnimatingPulse:(_Bool)arg1;
- (void)updateHighlights;
- (id)lineSearchReferencesForSearchReference:(id)arg1;
- (void)tswpTextEditingDidEndEditing:(id)arg1;
- (void)drawTextBackground:(struct CGContext *)arg1 insetRect:(struct CGRect)arg2 pulsating:(_Bool)arg3;

@end
