/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSSet, TSURetainedPointerKeyDictionary;

@protocol TSDLayerAndSubviewHosting;

@interface TSDCanvasSubviewsController : NSObject

{
    NSSet *_repChildViews;
    NSDictionary *_repsByChildView;
    id <TSDLayerAndSubviewHosting> _host;
    NSArray *_alternateLayersForViews;
    _Bool _needsLayout;
    _Bool _hasBeenTornDown;
    NSMutableArray *_subviewLayers;
    TSURetainedPointerKeyDictionary *_repViewControllersByChildView;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _mutex;
}

@property (nonatomic, readonly) NSSet *repChildViews;

- (void)dealloc;
- (void)teardown;
- (void)setNeedsLayout;
- (void)updateTopLevelLayersForTiling:(id)arg1;
- (void)updateViewsFromReps;
- (id)updateAlternateLayersForViews;
- (void)p_recursivelyFindAlternateLayersForRep:(id)arg1 accumulatingLayers:(id)arg2 repsByChildLayer:(id)arg3;
- (id)p_topLevelReps;
- (void)p_sortLayers:(id)arg1;
- (void)p_recursivelyFindChildViewsForRep:(id)arg1 accumulatingViews:(id)arg2 accumulatingRepsByChildView:(id)arg3;
- (void)p_recursivelyFindHostingRepsForRep:(id)arg1 accumulatingHostingReps:(id)arg2;
- (void)p_sortSubviews:(id)arg1;
- (void)syncPerformBlock:(CDUnknownBlockType)arg1;
- (id)initWithLayerAndSubviewHost:(id)arg1;
- (void)addSubviews:(id)arg1;
- (void)removeSubviews:(id)arg1;

@end
