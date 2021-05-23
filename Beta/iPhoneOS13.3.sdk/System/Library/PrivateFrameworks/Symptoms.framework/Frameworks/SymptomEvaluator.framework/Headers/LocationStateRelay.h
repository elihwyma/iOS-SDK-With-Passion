/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class CLLocationManager, NSArray, NSBundle, NSMutableDictionary, NSString, RTRoutineManager;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface LocationStateRelay : NSObject

{
    void *coreLocationDyLibHandle;
    void *coreRoutineDyLibHandle;
    RTRoutineManager *routineManager;
    NSBundle *mobileWiFiBundle;
    CLLocationManager *mobileWiFiLocationManager;
    Class CLLocationManagerClassRef;
    NSMutableDictionary *pendingLOIBlocks;
    NSObject<OS_dispatch_source> *locationRequestTimer;
    NSArray *_allLOIs;
}

@property (retain) NSArray *allLOIs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)fetchCurrentLocationLOIOnQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)unloadFrameworks;
- (_Bool)loadCoreLocation;
- (_Bool)authorizedToUseCoreRoutine;
- (_Bool)loadCoreRoutine;
- (void)showLocationArrow;
- (long long)preflightFrameworks;
- (unsigned long long)addPendingLOIBlocks:(CDUnknownBlockType)arg1;
- (void)cleanUpPendingLOIBlocks;
- (void)callPendingLOIBlocksWithCLLocation:(id)arg1 LOI:(id)arg2 andError:(id)arg3;
- (id)mobileWiFiLocationManager;
- (void)fetchLOICountOnMainQueueWithReply:(CDUnknownBlockType)arg1;

@end
