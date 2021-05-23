/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBTimer;

@interface _INPBResumeTimerIntent : PBCodable <Swift>

{
    struct {
        unsigned int resumeMultiple:1;
    } _has;
    _Bool _resumeMultiple;
    _Bool __encodeLegacyGloryData;
    _INPBIntentMetadata *_intentMetadata;
    _INPBTimer *_targetTimer;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) _Bool resumeMultiple;
@property (nonatomic) _Bool hasResumeMultiple;
@property (retain, nonatomic) _INPBTimer *targetTimer;
@property (nonatomic, readonly) _Bool hasTargetTimer;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
