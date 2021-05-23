/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@protocol FxOnScreenControl

- (unsigned short)drawingCoordinates;
- (unsigned short)drawOSC:height:activePart:time: /* Error: Ran out of types for this method. */;
- (unsigned short)mouseDown:positionY:activePart:modifiers:forceUpdate:time: /* Error: Ran out of types for this method. */;
- (unsigned short)mouseDragged:positionY:activePart:modifiers:forceUpdate:time: /* Error: Ran out of types for this method. */;
- (unsigned short)mouseUp:positionY:activePart:modifiers:forceUpdate:time: /* Error: Ran out of types for this method. */;
- (unsigned short)keyDown:positionY:keyPressed:modifiers:forceUpdate:didHandle:time: /* Error: Ran out of types for this method. */;
- (unsigned short)keyUp:positionY:keyPressed:modifiers:forceUpdate:didHandle:time: /* Error: Ran out of types for this method. */;

@end
