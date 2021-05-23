/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class GEOComposedWaypoint, NSArray, NSError, NSMutableDictionary, NSString;

@interface MapsSuggestionsFakeNetworkRequester : NSObject

{
    struct Queue _queue;
    struct NSArray *_fakeMapItems;
    NSMutableDictionary *_fakeMapItemsPerPOICategory;
    NSMutableDictionary *_fakeMapItemsPerHandleData;
    GEOComposedWaypoint *_fakeWaypoint;
    NSArray *_fakeTraffic;
    NSError *_fakeError;
    unsigned long long _calledFwdGeoByPostalAddress;
    unsigned long long _calledFwdGeoByAddressString;
    unsigned long long _calledRevGeo;
    unsigned long long _calledMapItemHandle;
    unsigned long long _calledSearch;
    unsigned long long _calledSearchByPOICategory;
    unsigned long long _calledWaypointForMapItem;
    unsigned long long _calledWaypointForLocation;
    unsigned long long _calledWaypointForAddressString;
    unsigned long long _calledETAForWaypoint;
    _Bool _breakCallbackPromise;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (id)init;
- (void)reset;
- (id).cxx_construct;
- (_Bool)ETAsFromHereWaypoint:(id)arg1 destinationWaypoints:(struct NSArray *)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)resolveMapItemHandleData:(struct NSData *)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)reverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)forwardGeocodeAddressString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)searchString:(id)arg1 maxResults:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)searchPOIWithName:(id)arg1 ofPOICategory:(id)arg2 withinVenue:(id)arg3 maxResults:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)configureError:(id)arg1;
- (_Bool)forwardGeocodePostalAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)composedWaypointForMapItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)composedWaypointForLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)composedWaypointForAddressString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configureMapItems:(struct NSArray *)arg1;
- (void)configureMapItems:(struct NSArray *)arg1 forPOICategory:(id)arg2;
- (void)configureMapItem:(struct GEOMapItemStorage *)arg1 forHandleData:(struct NSData *)arg2;
- (void)configureWaypoint:(id)arg1;
- (void)configureTraffic:(id)arg1;
- (void)configureBrokenCallBackPromise;
- (unsigned long long)calledRequestFwdGeoByPostalAddress;
- (unsigned long long)calledRequestFwdGeoByAddressString;
- (unsigned long long)calledRequestRevGeo;
- (unsigned long long)calledRequestMapItemHandle;
- (unsigned long long)calledRequestSearch;
- (unsigned long long)calledRequestSearchByPOICategory;
- (unsigned long long)calledRequestWaypointForMapItem;
- (unsigned long long)calledRequestWaypointForLocation;
- (unsigned long long)calledRequestWaypointForAddressString;
- (unsigned long long)calledRequestETAForWaypoint;

@end
