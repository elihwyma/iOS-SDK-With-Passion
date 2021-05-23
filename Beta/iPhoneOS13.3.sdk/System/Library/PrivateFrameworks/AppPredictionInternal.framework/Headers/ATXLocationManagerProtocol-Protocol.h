/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@protocol ATXLocationManagerProtocol

+ (unsigned short)sharedInstance;
+ (unsigned short)stringForLOIType: /* Error: Ran out of types for this method. */;

- (unsigned short)getCurrentLocation;
- (unsigned short)locationOfInterestAtCurrentLocation;
- (unsigned short)distanceFromHomeOfCurrentLocationInMeters;
- (unsigned short)distanceFromWorkOfCurrentLocationInMeters;
- (unsigned short)distanceFromSchoolOfCurrentLocationInMeters;
- (unsigned short)distanceFromGymOfCurrentLocationInMeters;
- (unsigned short)fetchAllLocationsOfInterest: /* Error: Ran out of types for this method. */;
- (unsigned short)clearLocationOfInterest;

@end
