/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@class TSWPRep;

@protocol TSWPTextMagnifier <Swift>

@property (retain, nonatomic) TSWPRep *target;
@property (nonatomic, readonly) struct CGPoint terminalPoint;
@property (nonatomic, readonly) _Bool terminalPointPlacedCarefully;
@property (nonatomic) struct CGPoint magnificationPoint;
@property (nonatomic) struct CGPoint offset;
@property (nonatomic) struct CGPoint animationPoint;

- (unsigned short)stopMagnifying: /* Error: Ran out of types for this method. */;
- (unsigned short)postAutoscrollPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)setAutoscrollDirections: /* Error: Ran out of types for this method. */;
- (unsigned short)autoscrollWillNotStart;
- (unsigned short)beginMagnifyingTarget:magnificationPoint:offset:animated: /* Error: Ran out of types for this method. */;

@end
