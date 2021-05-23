/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIFocusSystem, UIScreen, _UIFocusSearchInfo;

@protocol UICoordinateSpace, _UIFocusMapArea;

@protocol _UIFocusRegionSearchContext <Swift>

@property (weak, nonatomic, readonly) UIFocusSystem *focusSystem;
@property (weak, nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) id <UICoordinateSpace> coordinateSpace;
@property (nonatomic, readonly) id <_UIFocusMapArea> searchArea;
@property (nonatomic, readonly) _UIFocusSearchInfo *searchInfo;

- (unsigned short)addRegion: /* Error: Ran out of types for this method. */;
- (unsigned short)addRegionsInContainer: /* Error: Ran out of types for this method. */;
- (unsigned short)addRegions: /* Error: Ran out of types for this method. */;
- (unsigned short)addRegionsInContainers: /* Error: Ran out of types for this method. */;

@end
