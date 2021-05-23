/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class NSString;

@protocol PGGraphIngestScene <Swift>

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) double relevance;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (nonatomic, readonly) unsigned long long numberOfHighConfidenceAssets;
@property (nonatomic, readonly) unsigned long long numberOfSearchConfidenceAssets;
@property (nonatomic, readonly) _Bool isReliable;

@end
