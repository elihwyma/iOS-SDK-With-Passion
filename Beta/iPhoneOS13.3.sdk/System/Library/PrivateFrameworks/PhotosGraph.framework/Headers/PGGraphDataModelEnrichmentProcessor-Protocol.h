/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@protocol PGGraphDataModelEnrichmentProcessor <Swift>

+ (unsigned short)backgroundJobName;
+ (unsigned short)backgroundJobTimeout;
+ (unsigned short)supportsBackgroundJob;

- (unsigned short)enrichDataModelWithManager:graphUpdateInventory:progressBlock: /* Error: Ran out of types for this method. */;

@end
