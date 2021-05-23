/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class CLLocation, MKPointOfInterestFilter, NSArray, NSString, _MKLocalSearchExternalTransitLookupParameters, _MKLocalSearchMerchantParameters;

@protocol GEOCompletionItem;

@interface MKLocalSearchRequest : NSObject

{
    NSString *_naturalLanguageQuery;
    _Bool _hasRegion;
    CDStruct_b7cb895d _region;
    _Bool _allowPhoneNumberLookupUsingCellular;
    _Bool _hasSentFeedbackForCompletion;
    int _resultProviderID;
    id <GEOCompletionItem> _geoCompletionItem;
    CLLocation *_deviceLocation;
    _MKLocalSearchMerchantParameters *_merchantParameters;
    _MKLocalSearchExternalTransitLookupParameters *_externalTransitLookupParameters;
    NSArray *_phoneNumbers;
    NSArray *_muids;
    NSString *_contactsDataString;
    NSString *_canonicalSearchString;
    unsigned long long _resultTypes;
    MKPointOfInterestFilter *_pointOfInterestFilter;
}

@property (nonatomic, readonly) _Bool _hasRegion;
@property (nonatomic, readonly) id <GEOCompletionItem> geoCompletionItem;
@property (nonatomic) _Bool hasSentFeedbackForCompletion;
@property (retain, nonatomic, getter=_deviceLocation, setter=_setDeviceLocation:) CLLocation *deviceLocation;
@property (retain, nonatomic, getter=_merchantParameters, setter=_setMerchantParameters:) _MKLocalSearchMerchantParameters *merchantParameters;
@property (retain, nonatomic, getter=_externalTransitLookupParameters, setter=_setExternalTransitLookupParameters:) _MKLocalSearchExternalTransitLookupParameters *externalTransitLookupParameters;
@property (retain, nonatomic, getter=_phoneNumbers, setter=_setPhoneNumbers:) NSArray *phoneNumbers;
@property (nonatomic, getter=_allowPhoneNumberLookupUsingCellular, setter=_setAllowPhoneNumberLookupUsingCellular:) _Bool allowPhoneNumberLookupUsingCellular;
@property (retain, nonatomic, getter=_muids, setter=_setMuids:) NSArray *muids;
@property (nonatomic, getter=_resultProviderID, setter=_setResultProviderID:) int resultProviderID;
@property (retain, nonatomic, getter=_contactsDataString, setter=_setContactsDataString:) NSString *contactsDataString;
@property (retain, nonatomic, getter=_canonicalSearchString, setter=_setCanonicalSearchString:) NSString *canonicalSearchString;
@property (copy, nonatomic) NSString *naturalLanguageQuery;
@property (nonatomic) CDStruct_b7cb895d region;
@property (nonatomic) unsigned long long resultTypes;
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter;

+ (id)searchRequestWithCompletion:(id)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_dictionaryRepresentation;
- (id)initWithCompletion:(id)arg1;
- (id)initWithNaturalLanguageQuery:(id)arg1;
- (id)initWithNaturalLanguageQuery:(id)arg1 region:(CDStruct_b7cb895d)arg2;
- (id)initWithMapsURL:(id)arg1;

@end
