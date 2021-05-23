/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class NSDictionary, NSString;

@protocol PLMetricEvent <Swift>

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *payload;

- (unsigned short)gatherMetricsWithProgressBlock: /* Error: Ran out of types for this method. */;

@end
