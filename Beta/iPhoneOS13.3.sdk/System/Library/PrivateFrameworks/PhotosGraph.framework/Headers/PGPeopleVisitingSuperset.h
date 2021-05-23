/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSCountedSet, NSDateInterval, NSMutableArray, PGGraphAddressNode, PGPeopleVisitingVisit;

@interface PGPeopleVisitingSuperset : NSObject

{
    NSCountedSet *_numberOfMomentsByDistance;
    NSMutableArray *_visits;
    PGPeopleVisitingVisit *_currentVisit;
    PGGraphAddressNode *_addressNode;
    NSDateInterval *_localDateInterval;
    unsigned long long _numberOfMatchingMoments;
    unsigned long long _totalNumberOfMoments;
    struct CLLocationCoordinate2D _coordinates;
}

@property (readonly) PGGraphAddressNode *addressNode;
@property (readonly) struct CLLocationCoordinate2D coordinates;
@property (readonly) NSDateInterval *localDateInterval;
@property (readonly) unsigned long long numberOfMatchingMoments;
@property (readonly) unsigned long long totalNumberOfMoments;
@property (readonly) NSArray *visits;
@property (readonly) double lowerVeryFarRatio;
@property (readonly) double upperVeryFarRatio;
@property (readonly) double lowerFarRatio;
@property (readonly) double upperFarRatio;
@property (readonly) double lowerCloseRatio;
@property (readonly) double upperCloseRatio;

- (id)description;
- (id)initWithAddressNode:(id)arg1 localDateInterval:(id)arg2;
- (void)registerMomentNode:(id)arg1 distance:(unsigned long long)arg2;
- (void)closeVisitFindingSession;
- (void)resetVisitFindingSession;

@end
