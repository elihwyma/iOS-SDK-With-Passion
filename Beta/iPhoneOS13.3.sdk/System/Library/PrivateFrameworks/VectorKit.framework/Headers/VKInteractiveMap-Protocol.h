/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/Swift-Protocol.h>

@class NSArray;

@protocol VKInteractiveMapDelegate;

@protocol VKInteractiveMap <Swift>

@property (nonatomic) id <VKInteractiveMapDelegate> delegate;
@property (nonatomic, readonly) NSArray *overlays;
@property (nonatomic, readonly) NSArray *visibleTileSets;

+ (unsigned short)supportsMapType:scale: /* Error: Ran out of types for this method. */;

- (unsigned short)addOverlay: /* Error: Ran out of types for this method. */;
- (unsigned short)detailedDescription;
- (unsigned short)setMapType:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)attributionsForCurrentRegion;
- (unsigned short)consoleString: /* Error: Ran out of types for this method. */;
- (unsigned short)annotationRectTest;
- (unsigned short)annotationCoordinateTest;
- (unsigned short)shouldHideOffscreenSelectedAnnotation;
- (unsigned short)removeOverlay: /* Error: Ran out of types for this method. */;
- (unsigned short)insertOverlay:aboveOverlay: /* Error: Ran out of types for this method. */;
- (unsigned short)insertOverlay:belowOverlay: /* Error: Ran out of types for this method. */;
- (unsigned short)isPointValidForGesturing: /* Error: Ran out of types for this method. */;
- (unsigned short)debugHighlightObjectAtPoint:highlightTarget: /* Error: Ran out of types for this method. */;
- (unsigned short)requestStylesheetMapDisplayStyle:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)convertPointToCoordinate: /* Error: Ran out of types for this method. */;
- (unsigned short)convertPointToMapPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)convertMapPointToPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)convertCoordinateToPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)convertCoordinateToCameraModelPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)transitionToTracking:mapMode:startLocation:startCourse:cameraController:pounceCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setNavCameraIsDetached: /* Error: Ran out of types for this method. */;
- (unsigned short)currentRoadSignOffset;

@end
