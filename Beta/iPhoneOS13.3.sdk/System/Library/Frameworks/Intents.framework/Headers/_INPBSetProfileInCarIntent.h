/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDataString, _INPBInteger, _INPBIntentMetadata, _INPBString;

@interface _INPBSetProfileInCarIntent : PBCodable <Swift>

{
    struct {
        unsigned int defaultProfile:1;
    } _has;
    _Bool _defaultProfile;
    _Bool __encodeLegacyGloryData;
    _INPBDataString *_carName;
    _INPBIntentMetadata *_intentMetadata;
    _INPBString *_profileName;
    _INPBInteger *_profileNumber;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBDataString *carName;
@property (nonatomic, readonly) _Bool hasCarName;
@property (nonatomic) _Bool defaultProfile;
@property (nonatomic) _Bool hasDefaultProfile;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBString *profileName;
@property (nonatomic, readonly) _Bool hasProfileName;
@property (retain, nonatomic) _INPBInteger *profileNumber;
@property (nonatomic, readonly) _Bool hasProfileNumber;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
