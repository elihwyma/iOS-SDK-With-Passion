/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBStartCallIntent : PBCodable <Swift>

{
    struct {
        unsigned int audioRoute:1;
        unsigned int callCapability:1;
        unsigned int destinationType:1;
        unsigned int preferredCallProvider:1;
        unsigned int recordTypeForRedialing:1;
        unsigned int ttyType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _audioRoute;
    int _callCapability;
    int _destinationType;
    int _preferredCallProvider;
    int _recordTypeForRedialing;
    int _ttyType;
    NSArray *_contacts;
    _INPBIntentMetadata *_intentMetadata;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int audioRoute;
@property (nonatomic) _Bool hasAudioRoute;
@property (nonatomic) int callCapability;
@property (nonatomic) _Bool hasCallCapability;
@property (copy, nonatomic) NSArray *contacts;
@property (nonatomic, readonly) unsigned long long contactsCount;
@property (nonatomic) int destinationType;
@property (nonatomic) _Bool hasDestinationType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) int preferredCallProvider;
@property (nonatomic) _Bool hasPreferredCallProvider;
@property (nonatomic) int recordTypeForRedialing;
@property (nonatomic) _Bool hasRecordTypeForRedialing;
@property (nonatomic) int ttyType;
@property (nonatomic) _Bool hasTtyType;

+ (_Bool)supportsSecureCoding;
+ (Class)contactsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)destinationTypeAsString:(int)arg1;
- (int)StringAsDestinationType:(id)arg1;
- (id)audioRouteAsString:(int)arg1;
- (int)StringAsAudioRoute:(id)arg1;
- (void)clearContacts;
- (id)preferredCallProviderAsString:(int)arg1;
- (int)StringAsPreferredCallProvider:(id)arg1;
- (id)recordTypeForRedialingAsString:(int)arg1;
- (int)StringAsRecordTypeForRedialing:(id)arg1;
- (id)ttyTypeAsString:(int)arg1;
- (int)StringAsTTYType:(id)arg1;
- (id)callCapabilityAsString:(int)arg1;
- (int)StringAsCallCapability:(id)arg1;
- (void)addContacts:(id)arg1;
- (id)contactsAtIndex:(unsigned long long)arg1;

@end
