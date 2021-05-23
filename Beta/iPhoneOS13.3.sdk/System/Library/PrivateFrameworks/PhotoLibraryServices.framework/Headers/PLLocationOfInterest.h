/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSUUID, PLLocationOfInterestLocation;

@interface PLLocationOfInterest : NSObject

{
    NSUUID *_identifier;
    long long _type;
    double _typeRadius;
    PLLocationOfInterestLocation *_routineLocation;
    PLLocationOfInterestLocation *_mapItemLocation;
    NSMutableArray *_visits;
}

@property (retain, nonatomic) NSMutableArray *visits;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) double typeRadius;
@property (nonatomic, readonly) PLLocationOfInterestLocation *routineLocation;
@property (nonatomic, readonly) PLLocationOfInterestLocation *mapItemLocation;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (double)distanceFromLocation:(id)arg1;
- (id)initWithIdentifier:(id)arg1 locationOfInterestType:(long long)arg2 typeRadius:(double)arg3 routineLocation:(id)arg4 mapItemLocation:(id)arg5;
- (void)addVisit:(id)arg1;
- (void)removeVisit:(id)arg1;
- (double)centerDistanceFromLocation:(id)arg1;

@end
