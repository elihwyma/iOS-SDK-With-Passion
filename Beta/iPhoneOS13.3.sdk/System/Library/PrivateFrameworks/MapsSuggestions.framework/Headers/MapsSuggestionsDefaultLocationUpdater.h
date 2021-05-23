/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/MapsSuggestionsBaseLocationUpdater.h>

@class CLLocationManager, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface MapsSuggestionsDefaultLocationUpdater : MapsSuggestionsBaseLocationUpdater

{
    CLLocationManager *_locationManager;
    _Bool _running;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (id)init;
- (void)dealloc;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)startImplemention;
- (void)stopImplementation;
- (void)_initLocationManagers;
- (void)_deinitLocationManager;
- (void)_startImplemention;

@end
