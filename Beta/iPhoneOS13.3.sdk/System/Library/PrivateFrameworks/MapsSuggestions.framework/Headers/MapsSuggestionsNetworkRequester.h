/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MapsSuggestionsNetworkRequester : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (_Bool)ETAsFromHereWaypoint:(id)arg1 destinationWaypoints:(struct NSArray *)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)resolveMapItemHandleData:(struct NSData *)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)reverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)forwardGeocodeAddressString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)searchString:(id)arg1 maxResults:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)searchPOIWithName:(id)arg1 ofPOICategory:(id)arg2 withinVenue:(id)arg3 maxResults:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)forwardGeocodePostalAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)composedWaypointForMapItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)composedWaypointForLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)composedWaypointForAddressString:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
