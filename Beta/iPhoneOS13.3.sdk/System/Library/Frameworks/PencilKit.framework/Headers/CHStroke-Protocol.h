/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/Swift-Protocol.h>

@protocol CHStrokeIdentifier;

@protocol CHStroke <Swift>

@property (retain, nonatomic, readonly) id <CHStrokeIdentifier> strokeIdentifier;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) double startTimestamp;
@property (nonatomic, readonly) double endTimestamp;

- (unsigned short)enumeratePointsWithDistanceStep:usingBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)enumeratePointsWithTimestep:usingBlock: /* Error: Ran out of types for this method. */;

@end
