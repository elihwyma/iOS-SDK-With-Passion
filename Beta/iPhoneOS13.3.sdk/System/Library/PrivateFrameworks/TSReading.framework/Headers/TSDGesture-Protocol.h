/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@class NSString, TSDRep;

@protocol TSDGestureDelegate, TSDGestureTarget;

@protocol TSDGesture <Swift>

@property (retain, nonatomic) id <TSDGestureTarget> cachedGestureTarget;
@property (nonatomic) id <TSDGestureDelegate> gestureDelegate;
@property (retain, nonatomic) NSString *gestureKind;
@property (retain, nonatomic) TSDRep *targetRep;
@property (nonatomic, readonly) int gestureState;

- (unsigned short)isDone;
- (unsigned short)unscaledLocationForICC: /* Error: Ran out of types for this method. */;
- (unsigned short)boundsLocationForICC: /* Error: Ran out of types for this method. */;
- (unsigned short)naturalLocationForRep: /* Error: Ran out of types for this method. */;

@end
