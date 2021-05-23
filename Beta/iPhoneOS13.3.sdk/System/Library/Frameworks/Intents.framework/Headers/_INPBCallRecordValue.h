/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBCallMetrics, _INPBContactValue, _INPBDateTime, _INPBInteger;

@interface _INPBCallRecordValue : PBCodable <Swift>

{
    struct {
        unsigned int callCapability:1;
        unsigned int callType:1;
        unsigned int unseen:1;
    } _has;
    _Bool _unseen;
    _Bool __encodeLegacyGloryData;
    int _callCapability;
    int _callType;
    _INPBCallMetrics *_callMetrics;
    _INPBContactValue *_caller;
    _INPBDateTime *_dateCreated;
    NSString *_identifier;
    _INPBInteger *_numberOfCalls;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int callCapability;
@property (nonatomic) _Bool hasCallCapability;
@property (retain, nonatomic) _INPBCallMetrics *callMetrics;
@property (nonatomic, readonly) _Bool hasCallMetrics;
@property (nonatomic) int callType;
@property (nonatomic) _Bool hasCallType;
@property (retain, nonatomic) _INPBContactValue *caller;
@property (nonatomic, readonly) _Bool hasCaller;
@property (retain, nonatomic) _INPBDateTime *dateCreated;
@property (nonatomic, readonly) _Bool hasDateCreated;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) _INPBInteger *numberOfCalls;
@property (nonatomic, readonly) _Bool hasNumberOfCalls;
@property (nonatomic) _Bool unseen;
@property (nonatomic) _Bool hasUnseen;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)callTypeAsString:(int)arg1;
- (int)StringAsCallType:(id)arg1;
- (id)callCapabilityAsString:(int)arg1;
- (int)StringAsCallCapability:(id)arg1;

@end
