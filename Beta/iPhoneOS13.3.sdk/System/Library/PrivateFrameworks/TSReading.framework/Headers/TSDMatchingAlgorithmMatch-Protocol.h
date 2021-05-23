/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@protocol TSDMatchingAlgorithmMatch

@property (nonatomic, readonly) long long matchCost;
@property (nonatomic, readonly) id incomingMatchObject;
@property (nonatomic, readonly) id outgoingMatchObject;

- (unsigned short)compareToMatch: /* Error: Ran out of types for this method. */;
- (unsigned short)conflictsWithMatch: /* Error: Ran out of types for this method. */;

@end
