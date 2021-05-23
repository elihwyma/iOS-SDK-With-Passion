/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSMutableDictionary, NSString;

@interface MNSuggestionsManager : NSObject

{
    _Bool _locationsAvailable;
    _Bool _changingState;
    unsigned long long _state;
    NSMutableDictionary *_suggestionsStorage;
    NSHashTable *_observers;
}

@property (retain, nonatomic) NSMutableDictionary *suggestionsStorage;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) _Bool changingState;
@property (nonatomic) unsigned long long state;
@property (readonly) NSArray *allSuggestions;
@property (nonatomic) _Bool locationsAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerDidReset:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)addSuggestions:(id)arg1;
- (void)_startListenForDebugTestNotifications;
- (void)_stopListenForDebugTestNotifications;
- (void)_verifyHaveObservers;
- (void)_notifyObserversDidAddSuggestion:(id)arg1;
- (void)_notifyObserversDidUpdateSuggestions;
- (void)_updateLocationsAvailable;
- (_Bool)refreshSuggestions;
- (void)_addFakeSuggestion:(id)arg1;

@end
