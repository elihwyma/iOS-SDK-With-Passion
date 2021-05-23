/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBSelectionItem;

@interface _INPBPayloadConfirmation : PBCodable <Swift>

{
    struct {
        unsigned int startCallIntentContactsConfirmationReason:1;
        unsigned int reason:1;
        unsigned int addTasksIntentTargetTaskListConfirmationReason:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _startCallIntentContactsConfirmationReason;
    int _reason;
    int _addTasksIntentTargetTaskListConfirmationReason;
    _INPBSelectionItem *_confirmationItem;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBSelectionItem *confirmationItem;
@property (nonatomic, readonly) _Bool hasConfirmationItem;
@property (nonatomic) int startCallIntentContactsConfirmationReason;
@property (nonatomic) _Bool hasStartCallIntentContactsConfirmationReason;
@property (nonatomic) int reason;
@property (nonatomic) _Bool hasReason;
@property (nonatomic) int addTasksIntentTargetTaskListConfirmationReason;
@property (nonatomic) _Bool hasAddTasksIntentTargetTaskListConfirmationReason;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)startCallIntentContactsConfirmationReasonAsString:(int)arg1;
- (int)StringAsStartCallIntentContactsConfirmationReason:(id)arg1;
- (id)reasonAsString:(int)arg1;
- (int)StringAsReason:(id)arg1;
- (id)addTasksIntentTargetTaskListConfirmationReasonAsString:(int)arg1;
- (int)StringAsAddTasksIntentTargetTaskListConfirmationReason:(id)arg1;

@end
