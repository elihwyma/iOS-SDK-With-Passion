/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBContact, _INPBDateTimeRange, _INPBIntentMetadata;

@interface _INPBSearchCallHistoryIntent : PBCodable <Swift>

{
    CDStruct_95bda58d _callCapabilities;
    CDStruct_95bda58d _callTypes;
    CDStruct_95bda58d _capabilities;
    struct {
        unsigned int callType:1;
        unsigned int preferredCallProvider:1;
        unsigned int unseen:1;
    } _has;
    _Bool _unseen;
    _Bool __encodeLegacyGloryData;
    int _callType;
    int _preferredCallProvider;
    _INPBDateTimeRange *_dateCreated;
    _INPBIntentMetadata *_intentMetadata;
    _INPBContact *_recipient;
    _INPBContact *_targetContact;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int *callCapabilities;
@property (nonatomic, readonly) unsigned long long callCapabilitiesCount;
@property (nonatomic) int callType;
@property (nonatomic) _Bool hasCallType;
@property (nonatomic, readonly) int *callTypes;
@property (nonatomic, readonly) unsigned long long callTypesCount;
@property (nonatomic, readonly) int *capabilities;
@property (nonatomic, readonly) unsigned long long capabilitiesCount;
@property (retain, nonatomic) _INPBDateTimeRange *dateCreated;
@property (nonatomic, readonly) _Bool hasDateCreated;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) int preferredCallProvider;
@property (nonatomic) _Bool hasPreferredCallProvider;
@property (retain, nonatomic) _INPBContact *recipient;
@property (nonatomic, readonly) _Bool hasRecipient;
@property (retain, nonatomic) _INPBContact *targetContact;
@property (nonatomic, readonly) _Bool hasTargetContact;
@property (nonatomic) _Bool unseen;
@property (nonatomic) _Bool hasUnseen;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearCallCapabilities;
- (void)addCallCapabilities:(int)arg1;
- (int)callCapabilitiesAtIndex:(unsigned long long)arg1;
- (void)setCallCapabilities:(int *)arg1 count:(unsigned long long)arg2;
- (id)callCapabilitiesAsString:(int)arg1;
- (int)StringAsCallCapabilities:(id)arg1;
- (id)callTypeAsString:(int)arg1;
- (int)StringAsCallType:(id)arg1;
- (void)clearCallTypes;
- (void)addCallTypes:(int)arg1;
- (int)callTypesAtIndex:(unsigned long long)arg1;
- (void)setCallTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)callTypesAsString:(int)arg1;
- (int)StringAsCallTypes:(id)arg1;
- (void)clearCapabilities;
- (void)addCapabilities:(int)arg1;
- (int)capabilitiesAtIndex:(unsigned long long)arg1;
- (void)setCapabilities:(int *)arg1 count:(unsigned long long)arg2;
- (id)capabilitiesAsString:(int)arg1;
- (int)StringAsCapabilities:(id)arg1;
- (id)preferredCallProviderAsString:(int)arg1;
- (int)StringAsPreferredCallProvider:(id)arg1;

@end
