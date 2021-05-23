/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

#import <AppPredictionInternal/Swift-Protocol.h>

@class ATXPredictedTransition, CLLocation, NSDate, NSString;

@protocol ATXLocationManagerProtocol, ATXPredictedLocationsManagerProtocol;

@interface ATXTransitionPredictorCR : NSObject <Swift>

{
    id <ATXLocationManagerProtocol> _locationManager;
    id <ATXPredictedLocationsManagerProtocol> _predictionsManager;
    CLLocation *_locationAtLastPrediction;
    ATXPredictedTransition *_upcomingTransition;
    NSDate *_now;
}

@property (retain, nonatomic) NSDate *now;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidateCache;
- (id)getNextTransitionOnActivity:(id)arg1;
- (id)initWithLocationManager:(id)arg1 locationPredictionsManager:(id)arg2;
- (id)getNextTransitionOnActivity:(id)arg1 date:(id)arg2 location:(id)arg3;
- (_Bool)isCacheValidForDate:(id)arg1 location:(id)arg2;
- (_Bool)updateCacheOnActivity:(id)arg1;
- (id)nextExitDate;
- (id)nextLoi;

@end
