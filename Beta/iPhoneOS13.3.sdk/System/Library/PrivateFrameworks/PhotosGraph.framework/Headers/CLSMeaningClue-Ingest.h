/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <MediaMiningKit/CLSMeaningClue.h>

@class NSString;

@interface CLSMeaningClue (Ingest)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) double relevance;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (nonatomic, readonly) unsigned long long numberOfHighConfidenceAssets;
@property (nonatomic, readonly) unsigned long long numberOfSearchConfidenceAssets;
@property (nonatomic, readonly) _Bool isReliable;
@property (nonatomic, readonly) NSString *placeInterestType;

@end
