/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface _INPBCallMetricsValue : PBCodable <Swift>

{
    struct {
        unsigned int callDuration:1;
        unsigned int timeToEstablish:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    double _callDuration;
    double _timeToEstablish;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double callDuration;
@property (nonatomic) _Bool hasCallDuration;
@property (nonatomic) double timeToEstablish;
@property (nonatomic) _Bool hasTimeToEstablish;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
