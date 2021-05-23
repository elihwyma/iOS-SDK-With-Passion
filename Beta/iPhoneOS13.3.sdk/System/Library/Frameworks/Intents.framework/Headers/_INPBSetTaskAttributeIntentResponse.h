/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBTask;

@interface _INPBSetTaskAttributeIntentResponse : PBCodable <Swift>

{
    CDStruct_95bda58d _warnings;
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBTask *_modifiedTask;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBTask *modifiedTask;
@property (nonatomic, readonly) _Bool hasModifiedTask;
@property (nonatomic, readonly) int *warnings;
@property (nonatomic, readonly) unsigned long long warningsCount;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearWarnings;
- (void)addWarnings:(int)arg1;
- (int)warningsAtIndex:(unsigned long long)arg1;
- (void)setWarnings:(int *)arg1 count:(unsigned long long)arg2;
- (id)warningsAsString:(int)arg1;
- (int)StringAsWarnings:(id)arg1;

@end
