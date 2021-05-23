/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@class NSArray, TSUColor;

@protocol TSDGradientStopContainer <Swift>

@property (retain, nonatomic) NSArray *gradientStops;
@property (retain, nonatomic) TSUColor *firstColor;
@property (retain, nonatomic) TSUColor *lastColor;

- (unsigned short)setColorOfStopAtIndex:toColor: /* Error: Ran out of types for this method. */;
- (unsigned short)insertGradientStop: /* Error: Ran out of types for this method. */;
- (unsigned short)insertStopAtFraction: /* Error: Ran out of types for this method. */;
- (unsigned short)swapStopAtIndex:withStopAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)insertStopAtFraction:withColor: /* Error: Ran out of types for this method. */;
- (unsigned short)removeStop: /* Error: Ran out of types for this method. */;
- (unsigned short)removeStopAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)reverseStopOrder;
- (unsigned short)evenlyDistributeStops;
- (unsigned short)moveStopAtIndex:toFraction: /* Error: Ran out of types for this method. */;
- (unsigned short)setInflectionOfStopAtIndex:toInflection: /* Error: Ran out of types for this method. */;

@end
