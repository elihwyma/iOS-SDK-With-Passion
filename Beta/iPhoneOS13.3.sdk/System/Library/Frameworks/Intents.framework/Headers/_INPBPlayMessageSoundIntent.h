/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBIntentMetadata;

@interface _INPBPlayMessageSoundIntent : PBCodable <Swift>

{
    struct {
        unsigned int soundType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _soundType;
    _INPBIntentMetadata *_intentMetadata;
    NSString *_messageIdentifier;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (copy, nonatomic) NSString *messageIdentifier;
@property (nonatomic, readonly) _Bool hasMessageIdentifier;
@property (nonatomic) int soundType;
@property (nonatomic) _Bool hasSoundType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)soundTypeAsString:(int)arg1;
- (int)StringAsSoundType:(id)arg1;

@end
