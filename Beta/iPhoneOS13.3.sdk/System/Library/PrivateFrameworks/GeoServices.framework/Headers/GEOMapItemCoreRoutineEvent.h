/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOBaseMapItem.h>

@class GEOAddressObject, GEOMapItemClientAttributes, GEOPlace, NSDate, NSDictionary, NSString;

@interface GEOMapItemCoreRoutineEvent : GEOBaseMapItem

{
    NSDictionary *_addressDictionary;
    GEOMapItemClientAttributes *_clientAttributes;
    GEOPlace *_place;
    NSString *_eventName;
    NSString *_eventTitle;
    NSDate *_eventDate;
    _Bool _eventIsAllDay;
    CDStruct_2c43369c _coordinate;
    GEOAddressObject *_addressObject;
}

- (id)description;
- (id)name;
- (_Bool)isValid;
- (CDStruct_c3b9c2ee)coordinate;
- (id)eventName;
- (id)addressDictionary;
- (id)_place;
- (id)eventDate;
- (_Bool)isEventAllDay;
- (id)addressObject;
- (id)weatherDisplayName;
- (id)geoAddress;
- (id)_clientAttributes;
- (_Bool)_hasResolvablePartialInformation;
- (_Bool)_responseStatusIsIncomplete;
- (id)initWithAddressDictionary:(id)arg1 eventName:(id)arg2 eventTitle:(id)arg3 eventDate:(id)arg4 eventIsAllDay:(_Bool)arg5 coordinate:(CDStruct_c3b9c2ee)arg6 clientAttributes:(id)arg7;

@end
