/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface _CPSpotlightUsagePropensity : PBCodable

{
    float _appLaunch;
    float _onDeviceAddressBookData;
    float _onDeviceOtherPersonalData;
    float _punchout;
    float _thirdPartyInAppContent;
    float _parsec;
    float _querySuggestion;
    float _other;
    int _totalEngagements;
    float _siriSuggestions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) float appLaunch;
@property (nonatomic) float onDeviceAddressBookData;
@property (nonatomic) float onDeviceOtherPersonalData;
@property (nonatomic) float punchout;
@property (nonatomic) float thirdPartyInAppContent;
@property (nonatomic) float parsec;
@property (nonatomic) float querySuggestion;
@property (nonatomic) float other;
@property (nonatomic) int totalEngagements;
@property (nonatomic) float siriSuggestions;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
