/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIFocusSystem, _UIFocusRegion, _UIFocusRegionContentAttributes, _UIFocusSearchInfo;

@protocol UICoordinateSpace, _UIFocusRegionContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSnapshotter : NSObject

{
    _Bool _snapshotFrameIsEmpty;
    _Bool _clipToSnapshotRect;
    UIFocusSystem *_focusSystem;
    id <_UIFocusRegionContainer> _rootContainer;
    id <UICoordinateSpace> _coordinateSpace;
    _UIFocusRegionContentAttributes *_contentAttributes;
    _UIFocusRegion *_focusedRegion;
    id <_UIFocusRegionContainer> _regionsContainer;
    _UIFocusSearchInfo *_searchInfo;
    struct CGRect _snapshotFrame;
}

@property (retain, nonatomic) _UIFocusSearchInfo *searchInfo;
@property (weak, nonatomic, readonly) UIFocusSystem *focusSystem;
@property (weak, nonatomic, readonly) id <_UIFocusRegionContainer> rootContainer;
@property (weak, nonatomic, readonly) id <UICoordinateSpace> coordinateSpace;
@property (copy, nonatomic, readonly) _UIFocusRegionContentAttributes *contentAttributes;
@property (copy, nonatomic) _UIFocusRegion *focusedRegion;
@property (weak, nonatomic) id <_UIFocusRegionContainer> regionsContainer;
@property (nonatomic) struct CGRect snapshotFrame;
@property (nonatomic) _Bool clipToSnapshotRect;

- (id)init;
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 coordinateSpace:(id)arg3 searchInfo:(id)arg4;
- (id)captureSnapshot;
- (id)_searchAreaForContainerSearchRect:(struct CGRect)arg1;

@end
