/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLTripProcessor : NSObject

+ (id)processTripsWithItems:(id)arg1 frequentLocations:(id)arg2 lastHomeVisit:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
+ (double)_timeIntervalBetweenItem:(id)arg1 andItem:(id)arg2;
+ (unsigned long long)_numberOfAssetsInItems:(id)arg1;
+ (double)_minimumDistanceBetweenFrequentLocations:(id)arg1 andItem:(id)arg2;
+ (id)_filterFrequentLocations:(id)arg1 forDateInterval:(id)arg2;

@end
