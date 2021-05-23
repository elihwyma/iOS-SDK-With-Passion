/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBIntentResponsePayloadFailure, _INPBIntentResponsePayloadSuccess, _INPBUserActivity;

@interface _INPBIntentResponse : PBCodable <Swift>

{
    struct {
        unsigned int requiresAuthentication:1;
        unsigned int requiresProtectedData:1;
        unsigned int type:1;
    } _has;
    _Bool _requiresAuthentication;
    _Bool _requiresProtectedData;
    _Bool __encodeLegacyGloryData;
    int _type;
    _INPBIntentResponsePayloadFailure *_payloadFailure;
    _INPBIntentResponsePayloadSuccess *_payloadSuccess;
    _INPBUserActivity *_userActivity;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBIntentResponsePayloadFailure *payloadFailure;
@property (nonatomic, readonly) _Bool hasPayloadFailure;
@property (retain, nonatomic) _INPBIntentResponsePayloadSuccess *payloadSuccess;
@property (nonatomic, readonly) _Bool hasPayloadSuccess;
@property (nonatomic) _Bool requiresAuthentication;
@property (nonatomic) _Bool hasRequiresAuthentication;
@property (nonatomic) _Bool requiresProtectedData;
@property (nonatomic) _Bool hasRequiresProtectedData;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;
@property (retain, nonatomic) _INPBUserActivity *userActivity;
@property (nonatomic, readonly) _Bool hasUserActivity;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;

@end
