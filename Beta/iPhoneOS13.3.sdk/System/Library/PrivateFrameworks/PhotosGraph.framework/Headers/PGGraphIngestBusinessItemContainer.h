/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class CLSBusinessItem, CLSLocationOfInterestVisit, NSArray, NSDateInterval, NSString;

@interface PGGraphIngestBusinessItemContainer : NSObject

{
    CLSBusinessItem *_businessItem;
    CLSLocationOfInterestVisit *_visit;
    NSDateInterval *_dateInterval;
}

@property (nonatomic, readonly) CLSBusinessItem *businessItem;
@property (nonatomic, readonly) CLSLocationOfInterestVisit *visit;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *businessCategories;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) long long venueCapacity;
@property (nonatomic, readonly) double routineVisitConfidence;
@property (nonatomic, readonly) _Bool hasRoutineVisit;

- (id)initWithBusinessItem:(id)arg1 visit:(id)arg2 dateInterval:(id)arg3;
- (id)initWithBusinessItem:(id)arg1 visit:(id)arg2;
- (id)initWithBusinessItem:(id)arg1 dateInterval:(id)arg2;
- (void)updateBusinessItem:(id)arg1;

@end
