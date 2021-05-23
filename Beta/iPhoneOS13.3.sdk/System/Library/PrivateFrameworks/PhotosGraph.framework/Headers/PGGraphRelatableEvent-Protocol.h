/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@protocol PGGraphRelatableEvent <Swift>

+ (unsigned short)pathFromMoment;
+ (unsigned short)pathToMoment;
+ (unsigned short)pathFromTargetNodeDomain: /* Error: Ran out of types for this method. */;
+ (unsigned short)pathToTargetNodeDomain: /* Error: Ran out of types for this method. */;
+ (unsigned short)inclusivePathFromTargetNodeDomain:withName: /* Error: Ran out of types for this method. */;
+ (unsigned short)inclusivePathToTargetNodeDomain:withName: /* Error: Ran out of types for this method. */;

- (unsigned short)weightForMoment: /* Error: Ran out of types for this method. */;
- (unsigned short)photoEvent;
- (unsigned short)connectedEventsWithTargetDomain: /* Error: Ran out of types for this method. */;
- (unsigned short)keywordsForRelatedType:focusOnNodes: /* Error: Ran out of types for this method. */;

@end
