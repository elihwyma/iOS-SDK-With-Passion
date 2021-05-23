/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLMomentGenerationUtils : NSObject

+ (void)processLocationIfNecessaryInMoment:(id)arg1 usingManager:(id)arg2 frequentLocations:(id)arg3 frequentLocationsDidChange:(_Bool)arg4;
+ (unsigned short)processedLocationTypeForMoment:(id)arg1 locationsOfInterest:(id)arg2 frequentLocations:(id)arg3 routineIsAvailable:(_Bool)arg4;
+ (unsigned short)locationTypeForLocation:(id)arg1 usingLocationsOfInterest:(id)arg2 routineIsAvailable:(_Bool)arg3;
+ (_Bool)isTopFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2;
+ (id)sortedOverlappingFrequentLocations:(id)arg1;
+ (id)frequentLocationsOverlappingStartDate:(id)arg1 endDate:(id)arg2 frequentLocations:(id)arg3;
+ (_Bool)isAtFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2;
+ (_Bool)isNearFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2;

@end
