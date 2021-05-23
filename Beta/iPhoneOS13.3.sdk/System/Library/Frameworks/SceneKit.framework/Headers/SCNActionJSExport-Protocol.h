/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@protocol SCNActionJSExport <Swift>

@property (nonatomic) double duration;
@property (nonatomic) long long timingMode;
@property (nonatomic) CDUnknownBlockType timingFunction;
@property (nonatomic) double speed;

+ (unsigned short)fadeInWithDuration: /* Error: Ran out of types for this method. */;
+ (unsigned short)fadeOutWithDuration: /* Error: Ran out of types for this method. */;
+ (unsigned short)runBlock: /* Error: Ran out of types for this method. */;
+ (unsigned short)sequence: /* Error: Ran out of types for this method. */;
+ (unsigned short)removeFromParentNode;
+ (unsigned short)runBlock:queue: /* Error: Ran out of types for this method. */;
+ (unsigned short)waitForDuration:withRange: /* Error: Ran out of types for this method. */;
+ (unsigned short)waitForDuration: /* Error: Ran out of types for this method. */;
+ (unsigned short)moveByX:y:z:duration: /* Error: Ran out of types for this method. */;
+ (unsigned short)rotateByX:y:z:duration: /* Error: Ran out of types for this method. */;
+ (unsigned short)rotateToX:y:z:duration: /* Error: Ran out of types for this method. */;
+ (unsigned short)rotateByAngle:aroundAxis:duration: /* Error: Ran out of types for this method. */;
+ (unsigned short)rotateToAxisAngle:duration: /* Error: Ran out of types for this method. */;
+ (unsigned short)rotateToX:y:z:duration:shortestUnitArc: /* Error: Ran out of types for this method. */;
+ (unsigned short)scaleBy:duration: /* Error: Ran out of types for this method. */;
+ (unsigned short)scaleTo:duration: /* Error: Ran out of types for this method. */;
+ (unsigned short)repeatAction:count: /* Error: Ran out of types for this method. */;
+ (unsigned short)repeatActionForever: /* Error: Ran out of types for this method. */;
+ (unsigned short)fadeOpacityBy:duration: /* Error: Ran out of types for this method. */;
+ (unsigned short)fadeOpacityTo:duration: /* Error: Ran out of types for this method. */;
+ (unsigned short)customActionWithDuration:actionBlock: /* Error: Ran out of types for this method. */;
+ (unsigned short)moveBy:duration: /* Error: Ran out of types for this method. */;
+ (unsigned short)moveTo:duration: /* Error: Ran out of types for this method. */;
+ (unsigned short)group: /* Error: Ran out of types for this method. */;
+ (unsigned short)javaScriptActionWithScript:duration: /* Error: Ran out of types for this method. */;

- (unsigned short)copy;
- (unsigned short)reversedAction;

@end
