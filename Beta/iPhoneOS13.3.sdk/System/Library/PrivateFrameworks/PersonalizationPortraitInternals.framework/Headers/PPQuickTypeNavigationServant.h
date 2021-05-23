/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class GEONavigationListener, NSString;

@protocol OS_dispatch_semaphore;

@interface PPQuickTypeNavigationServant : NSObject

{
    GEONavigationListener *_navigationListener;
    int _navigationState;
    NSString *_destinationName;
    NSString *_streetName;
    double _remainingTimeToDestination;
    double _remainingDistanceToDestination;
    NSObject<OS_dispatch_semaphore> *_stateSemaphore;
    NSObject<OS_dispatch_semaphore> *_streetSemaphore;
    NSObject<OS_dispatch_semaphore> *_summarySemaphore;
    NSObject<OS_dispatch_semaphore> *_initializationComplete;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)navigationListener:(id)arg1 didUpdateCurrentRoadName:(id)arg2;
- (void)navigationListener:(id)arg1 didUpdateRouteSummary:(id)arg2;
- (void)navigationListener:(id)arg1 didUpdateGuidanceState:(id)arg2;
- (void)navigationListener:(id)arg1 didUpdatePositionFromDestination:(CDStruct_c3b9c2ee)arg2;
- (id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;
- (void)_warmUpFormatters;
- (void)_initializeNavigationListener;
- (_Bool)_waitForState;
- (_Bool)_waitForStreet;
- (_Bool)_waitForSummary;
- (void)_stopListeningToNavigationUpdate;
- (void)_makeNavRequests;

@end
