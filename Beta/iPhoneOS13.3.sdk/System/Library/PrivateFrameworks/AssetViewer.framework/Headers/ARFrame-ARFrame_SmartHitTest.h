/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <ARKit/ARFrame.h>

@class MISSING_TYPE;

@interface ARFrame (ARFrame_SmartHitTest)

@property (nonatomic, readonly) MISSING_TYPE *cameraPosition;

- (_Bool)hitTestResult:(id)arg1 isPlaneOfType:(unsigned long long)arg2;
- (float)hitTestResultDistanceFromCamera:(id)arg1;
- (id)smartHitTestResultForImagePoint:(float)arg1 assetPosition:maxDistance: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)normalizedImagePointForScreenPoint:(struct CGSize)arg1 viewportSize:(long long)arg2 orientation: /* Error: Ran out of types for this method. */;
- (id)hitTestOnPlaneWithWorldTransform:(CDStruct_14d5dc5e)arg1 forImagePoint:(float)arg2 maxDistance: /* Error: Ran out of types for this method. */;

@end
