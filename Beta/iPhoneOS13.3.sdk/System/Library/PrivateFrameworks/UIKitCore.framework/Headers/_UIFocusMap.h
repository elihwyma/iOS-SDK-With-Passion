/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIFocusSystem, _UIFocusMapSearchInfo, _UIFocusSearchInfo;

@protocol UICoordinateSpace, _UIFocusRegionContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusMap : NSObject

{
    _Bool _minimumSearchAreaIsEmpty;
    _Bool _trackingSearchInfo;
    _Bool _needsSearchInfo;
    UIFocusSystem *_focusSystem;
    id <_UIFocusRegionContainer> _rootContainer;
    id <UICoordinateSpace> _coordinateSpace;
    _UIFocusSearchInfo *_searchInfo;
    _UIFocusMapSearchInfo *_defaultItemSearchInfo;
    _UIFocusMapSearchInfo *_focusMovementSearchInfo;
    struct CGRect _minimumSearchArea;
}

@property (nonatomic, readonly, getter=_defaultItemSearchContext) _UIFocusMapSearchInfo *defaultItemSearchInfo;
@property (nonatomic, readonly, getter=_focusMovementSearchContext) _UIFocusMapSearchInfo *focusMovementSearchInfo;
@property (weak, nonatomic, readonly) UIFocusSystem *focusSystem;
@property (weak, nonatomic, readonly) id <_UIFocusRegionContainer> rootContainer;
@property (weak, nonatomic, readonly) id <UICoordinateSpace> coordinateSpace;
@property (nonatomic, readonly) _UIFocusSearchInfo *searchInfo;
@property (nonatomic) struct CGRect minimumSearchArea;

- (id)init;
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2;
- (id)_defaultFocusItemInEnvironment:(id)arg1 limitScopeUsingFocusPreferences:(_Bool)arg2;
- (void)diagnoseFocusabilityForItem:(id)arg1 report:(id)arg2;
- (id)_allDefaultFocusableRegionsInContainer:(id)arg1 intersectingRegion:(id)arg2;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inRegions:(id)arg2;
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 coordinateSpace:(id)arg3 searchInfo:(id)arg4;
- (void)_trackExternalSnapshot:(id)arg1;
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 searchInfo:(id)arg3;
- (id)_defaultMapSnapshotter;
- (void)_beginTrackingDefaultItemSearchInfoIfNecessary;
- (void)_beginTrackingFocusMovementSearchInfoIfNecessary;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 focusedRegion:(id)arg2;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3;
- (id)_nextFocusedItemForLinearFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3;
- (id)_nextFocusedItemForNonLinearFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3;
- (id)_linearlySortedFocusItemsForItems:(id)arg1;
- (id)_findAllDefaultFocusableRegionsWithSnapshotter:(id)arg1;
- (id)_allFocusableItemsInEnvironment:(id)arg1;
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 coordinateSpace:(id)arg3;
- (id)_defaultFocusItemInEnvironment:(id)arg1;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1;
- (id)_closestFocusableItemToPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 excludingItems:(id)arg3;
- (id)linearlyOrderedFocusRegionMapEntriesForRequest:(id)arg1;
- (void)_beginTrackingSearches;
- (id)_stopTrackingSearches;

@end
