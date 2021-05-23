/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBHomeUserTask;

@interface _INPBHomeUserTaskResponse : PBCodable <Swift>

{
    struct {
        unsigned int taskOutcome:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _taskOutcome;
    _INPBHomeUserTask *_userTask;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int taskOutcome;
@property (nonatomic) _Bool hasTaskOutcome;
@property (retain, nonatomic) _INPBHomeUserTask *userTask;
@property (nonatomic, readonly) _Bool hasUserTask;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)taskOutcomeAsString:(int)arg1;
- (int)StringAsTaskOutcome:(id)arg1;

@end
