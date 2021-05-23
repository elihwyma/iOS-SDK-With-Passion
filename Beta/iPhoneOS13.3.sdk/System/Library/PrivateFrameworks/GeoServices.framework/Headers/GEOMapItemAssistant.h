/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOBaseMapItem.h>

@class GEOAddressObject, GEOLocation, GEOPlace, NSDictionary, NSString, NSURL;

@interface GEOMapItemAssistant : GEOBaseMapItem

{
    GEOLocation *_location;
    NSDictionary *_addressDictionary;
    NSString *_name;
    NSURL *_businessURL;
    NSString *_phoneNumber;
    unsigned long long _muid;
    NSString *_attributionID;
    unsigned int _sampleSizeForUserRatingScore;
    float _normalizedUserRatingScore;
    GEOPlace *_place;
    GEOAddressObject *_addressObject;
}

- (id)description;
- (id)name;
- (_Bool)isValid;
- (CDStruct_c3b9c2ee)coordinate;
- (id)addressDictionary;
- (unsigned long long)_muid;
- (id)_place;
- (_Bool)_hasMUID;
- (id)addressObject;
- (id)weatherDisplayName;
- (id)geoAddress;
- (_Bool)_hasResolvablePartialInformation;
- (_Bool)_responseStatusIsIncomplete;
- (id)_businessURL;
- (_Bool)_hasUserRatingScore;
- (unsigned int)_sampleSizeForUserRatingScore;
- (float)_normalizedUserRatingScore;
- (id)initWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned int)arg9 normalizedUserRatingScore:(float)arg10;

@end
