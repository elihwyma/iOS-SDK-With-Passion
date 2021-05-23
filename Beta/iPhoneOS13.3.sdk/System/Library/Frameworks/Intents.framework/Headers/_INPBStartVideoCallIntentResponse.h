/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBCallMetrics;

@interface _INPBStartVideoCallIntentResponse : PBCodable <Swift>

{
    CDStruct_fbf2c6cd _has;
    _Bool __encodeLegacyGloryData;
    int _audioRoute;
    _INPBCallMetrics *_metrics;
    NSString *_status;
    NSArray *_targetContacts;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int audioRoute;
@property (nonatomic) _Bool hasAudioRoute;
@property (retain, nonatomic) _INPBCallMetrics *metrics;
@property (nonatomic, readonly) _Bool hasMetrics;
@property (copy, nonatomic) NSString *status;
@property (nonatomic, readonly) _Bool hasStatus;
@property (copy, nonatomic) NSArray *targetContacts;
@property (nonatomic, readonly) unsigned long long targetContactsCount;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)audioRouteAsString:(int)arg1;
- (int)StringAsAudioRoute:(id)arg1;
- (void)clearTargetContacts;
- (void)addTargetContacts:(id)arg1;
- (id)targetContactsAtIndex:(unsigned long long)arg1;

@end
