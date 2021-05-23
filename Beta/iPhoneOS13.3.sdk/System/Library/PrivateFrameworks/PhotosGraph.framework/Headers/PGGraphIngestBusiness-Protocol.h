/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class NSArray, NSDateInterval, NSString;

@protocol PGGraphIngestBusiness <Swift>

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *businessCategories;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) long long venueCapacity;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) double routineVisitConfidence;
@property (nonatomic, readonly) _Bool hasRoutineVisit;

@end
