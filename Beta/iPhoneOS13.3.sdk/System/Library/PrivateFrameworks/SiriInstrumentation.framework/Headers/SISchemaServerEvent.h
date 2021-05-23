/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, SISchemaConversationTrace, SISchemaDeviceFixedContext, SISchemaServerEventMetadata, SISchemaSpeechResultSelected, SISchemaTurnInteraction, SISchemaUserSpeechDuration;

@interface SISchemaServerEvent : PBCodable

{
    unsigned long long _whichEvent_Type;
    SISchemaUserSpeechDuration *_userSpeechDuration;
    SISchemaConversationTrace *_serverConversationTrace;
    SISchemaTurnInteraction *_turnInteraction;
    SISchemaSpeechResultSelected *_speechResultSelected;
    SISchemaDeviceFixedContext *_serverDeviceFixedContext;
    SISchemaServerEventMetadata *_eventMetadata;
}

@property (retain, nonatomic) SISchemaServerEventMetadata *eventMetadata;
@property (retain, nonatomic) SISchemaUserSpeechDuration *userSpeechDuration;
@property (retain, nonatomic) SISchemaConversationTrace *serverConversationTrace;
@property (retain, nonatomic) SISchemaTurnInteraction *turnInteraction;
@property (retain, nonatomic) SISchemaSpeechResultSelected *speechResultSelected;
@property (retain, nonatomic) SISchemaDeviceFixedContext *serverDeviceFixedContext;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
