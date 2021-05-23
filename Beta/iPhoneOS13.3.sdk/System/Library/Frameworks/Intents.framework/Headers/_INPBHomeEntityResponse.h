/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBHomeEntity;

@interface _INPBHomeEntityResponse : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBHomeEntity *_entity;
    NSArray *_taskResponses;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBHomeEntity *entity;
@property (nonatomic, readonly) _Bool hasEntity;
@property (copy, nonatomic) NSArray *taskResponses;
@property (nonatomic, readonly) unsigned long long taskResponsesCount;

+ (_Bool)supportsSecureCoding;
+ (Class)taskResponsesType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearTaskResponses;
- (void)addTaskResponses:(id)arg1;
- (id)taskResponsesAtIndex:(unsigned long long)arg1;

@end
