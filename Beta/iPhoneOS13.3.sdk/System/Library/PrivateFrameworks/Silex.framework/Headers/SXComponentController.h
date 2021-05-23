/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, SXLayoutBlueprint, SXPresentationAttributes, SXViewport;

@protocol SXComponentHosting, SXComponentViewEngine, SXDOMObjectProviding;

@interface SXComponentController : NSObject

{
    _Bool _isPresented;
    _Bool _isPresenting;
    SXLayoutBlueprint *_presentedBlueprint;
    NSArray *_flattenedComponentViews;
    id <SXComponentHosting> _host;
    SXViewport *_viewport;
    id <SXComponentViewEngine> _componentViewEngine;
    id <SXDOMObjectProviding> _DOMObjectProvider;
    NSHashTable *_observers;
    NSMutableDictionary *_mappedComponentViews;
    NSMutableArray *_sortedComponentViews;
    NSMutableArray *_nestedComponentViews;
    SXPresentationAttributes *_presentationAttributes;
}

@property (nonatomic, readonly) SXViewport *viewport;
@property (nonatomic, readonly) id <SXComponentViewEngine> componentViewEngine;
@property (nonatomic, readonly) id <SXDOMObjectProviding> DOMObjectProvider;
@property (nonatomic, readonly) NSHashTable *observers;
@property (retain, nonatomic) NSMutableDictionary *mappedComponentViews;
@property (retain, nonatomic) NSMutableArray *sortedComponentViews;
@property (retain, nonatomic) NSMutableArray *nestedComponentViews;
@property (nonatomic) _Bool isPresenting;
@property (nonatomic, readonly) SXPresentationAttributes *presentationAttributes;
@property (weak, nonatomic) id <SXComponentHosting> host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SXLayoutBlueprint *presentedBlueprint;
@property (nonatomic, readonly) NSArray *flattenedComponentViews;
@property (nonatomic, readonly) _Bool isPresented;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)assistiveTechnologyStatusDidChange;
- (id)componentsInRect:(struct CGRect)arg1;
- (id)componentViewForPoint:(struct CGPoint)arg1;
- (id)componentViewsForRole:(int)arg1;
- (id)componentViewForIdentifier:(id)arg1;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (id)initWithViewport:(id)arg1 componentViewEngine:(id)arg2 DOMObjectProvider:(id)arg3;
- (void)integrateBlueprint:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)provideInfosLayoutTo:(id)arg1;
- (id)componentViews;
- (void)removeComponentsInLayoutBlueprint:(id)arg1 removedFromLayoutBlueprint:(id)arg2;
- (void)presentBlueprint:(id)arg1 forParentComponentView:(id)arg2 inHost:(id)arg3;
- (void)presentComponentsInBlueprint:(id)arg1;
- (void)updateVisibilityStatesForComponentViews:(id)arg1;
- (void)updatePresentationStateForNestedComponentViews:(id)arg1 presentationState:(long long)arg2;
- (void)fadeComponent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePresentationStateForNestedComponentView:(id)arg1 presentationState:(long long)arg2;
- (void)renderContentsIfNeededForComponents:(id)arg1;
- (id)presentComponentBlueprint:(id)arg1 inHost:(id)arg2 columnLayout:(id)arg3;
- (id)componentViewForPoint:(struct CGPoint)arg1 inComponents:(id)arg2;
- (id)componentViewsForRole:(int)arg1 forLayoutBlueprint:(id)arg2;
- (void)updateVisibilityStatesForComponentViews:(id)arg1 toState:(long long)arg2;
- (struct CGRect)renderBounds;
- (void)updateVisibilityStatesForComponentViews:(id)arg1 parentComponent:(id)arg2 withOffset:(struct CGPoint)arg3;

@end
