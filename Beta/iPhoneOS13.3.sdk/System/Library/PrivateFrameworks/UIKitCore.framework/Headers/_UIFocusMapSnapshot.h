/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, NSString, UIFocusSystem, UIScreen, _UIFocusMapSnapshotDebugInfo, _UIFocusRegion, _UIFocusSearchInfo;

@protocol UICoordinateSpace, _UIFocusMapArea, _UIFocusRegionContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSnapshot : NSObject

{
    NSMutableArray *_mutableUnoccludedRegions;
    NSHashTable *_filteredOriginalRegions;
    _Bool _didCaptureSnapshot;
    NSMutableArray *_containersBeingAdded;
    NSMutableArray *_containersBeingAddedFocusSystems;
    NSHashTable *_eligibleEnvironments;
    NSHashTable *_ineligibleEnvironments;
    _Bool _isSearchingRegionsOfInterestContainer;
    _Bool _clipToSnapshotRect;
    NSArray *_regions;
    UIFocusSystem *_focusSystem;
    id <_UIFocusRegionContainer> _rootContainer;
    id <_UIFocusMapArea> _mapArea;
    _UIFocusRegion *_focusedRegion;
    id <_UIFocusRegionContainer> _regionsContainer;
    _UIFocusSearchInfo *_searchInfo;
    id <_UIFocusMapArea> _searchArea;
}

@property (nonatomic, readonly, getter=_debugInfo) _UIFocusMapSnapshotDebugInfo *debugInfo;
@property (retain, nonatomic) _UIFocusSearchInfo *searchInfo;
@property (nonatomic, readonly, getter=_searchArea) id <_UIFocusMapArea> searchArea;
@property (weak, nonatomic, readonly) UIFocusSystem *focusSystem;
@property (weak, nonatomic, readonly) id <_UIFocusRegionContainer> rootContainer;
@property (nonatomic, readonly) id <_UIFocusMapArea> mapArea;
@property (copy, nonatomic, readonly) _UIFocusRegion *focusedRegion;
@property (weak, nonatomic, readonly) id <_UIFocusRegionContainer> regionsContainer;
@property (copy, nonatomic, readonly) NSArray *regions;
@property (copy, nonatomic, readonly) NSArray *originalRegions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) id <UICoordinateSpace> coordinateSpace;

- (id)init;
- (id)debugQuickLookObject;
- (void)addRegion:(id)arg1;
- (id)_debugInfoWithFocusMapSearchInfo:(id)arg1;
- (id)searchArea;
- (void)addRegionsInContainer:(id)arg1;
- (id)regionsForOriginalRegion:(id)arg1;
- (id)_initWithSnapshotter:(id)arg1 mapArea:(id)arg2 searchArea:(id)arg3;
- (void)_capture;
- (void)addRegions:(id)arg1;
- (void)addRegionsInContainers:(id)arg1;
- (id)_initWithSnapshotter:(id)arg1 mapArea:(id)arg2;

@end
