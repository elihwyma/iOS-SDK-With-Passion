/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface GEOVenueIdentifier : NSObject

{
    _Bool _hasVenueID;
    unsigned long long _venueID;
    _Bool _hasFeatureID;
    unsigned long long _featureID;
    _Bool _hasBusinessID;
    unsigned long long _businessID;
    NSArray *_componentIdentifiers;
    NSArray *_originalIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=_hasVenueID) _Bool hasVenueID;
@property (nonatomic, readonly) unsigned long long venueID;
@property (nonatomic, readonly, getter=_hasFeatureID) _Bool hasFeatureID;
@property (nonatomic, readonly) unsigned long long featureID;
@property (nonatomic, readonly, getter=_hasBusinessID) _Bool hasBusinessID;
@property (nonatomic, readonly) unsigned long long businessID;
@property (nonatomic, readonly) NSArray *componentIdentifiers;

+ (id)componentIdentifiersFromVenueIdentifiers:(id)arg1;

- (id)init;
- (id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3;
- (id)placeDataVenueIdentifier;
- (id)initWithVenueIdentifiers:(id)arg1;
- (id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3 componentIdentifiers:(id)arg4;
- (id)placeDataVenueIdentifierForVenue;
- (id)initWithVenueID:(unsigned long long)arg1 componentIdentifiers:(id)arg2;
- (id)initWithVenueID:(unsigned long long)arg1;

@end
