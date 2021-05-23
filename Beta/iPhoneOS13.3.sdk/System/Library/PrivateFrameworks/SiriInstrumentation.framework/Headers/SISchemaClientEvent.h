/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, SISchemaAudioFirstBufferRecorded, SISchemaAudioStopRecording, SISchemaClientEventMetadata, SISchemaClientFlow, SISchemaClientTransportEventMetadata, SISchemaConversationTrace, SISchemaDeviceDynamicContext, SISchemaDeviceFixedContext, SISchemaDialogOutput, SISchemaDictationContext, SISchemaInvocation, SISchemaLocation, SISchemaPunchOut, SISchemaSiriCue, SISchemaSpeechTranscription, SISchemaTextToSpeechBegin, SISchemaTextToSpeechEnd, SISchemaUIStateTransition, SISchemaUUFRPresented;

@interface SISchemaClientEvent : PBCodable

{
    unsigned long long _whichEvent_Type;
    SISchemaAudioFirstBufferRecorded *_audioFirstBufferRecorded;
    SISchemaAudioStopRecording *_audioStopRecording;
    SISchemaConversationTrace *_clientConversationTrace;
    SISchemaDeviceDynamicContext *_deviceDynamicContext;
    SISchemaDeviceFixedContext *_deviceFixedContext;
    SISchemaDictationContext *_dictationContext;
    SISchemaInvocation *_invocation;
    SISchemaLocation *_location;
    SISchemaPunchOut *_punchOut;
    SISchemaSiriCue *_siriCue;
    SISchemaUUFRPresented *_uufrPresented;
    SISchemaSpeechTranscription *_speechTranscription;
    SISchemaTextToSpeechBegin *_textToSpeechBegin;
    SISchemaTextToSpeechEnd *_textToSpeechEnd;
    SISchemaUIStateTransition *_uiStateTransition;
    SISchemaClientFlow *_clientFlow;
    SISchemaDialogOutput *_dialogOutput;
    SISchemaClientEventMetadata *_eventMetadata;
    SISchemaClientTransportEventMetadata *_transportMetadata;
}

@property (retain, nonatomic) SISchemaClientEventMetadata *eventMetadata;
@property (retain, nonatomic) SISchemaClientTransportEventMetadata *transportMetadata;
@property (retain, nonatomic) SISchemaAudioFirstBufferRecorded *audioFirstBufferRecorded;
@property (retain, nonatomic) SISchemaAudioStopRecording *audioStopRecording;
@property (retain, nonatomic) SISchemaConversationTrace *clientConversationTrace;
@property (retain, nonatomic) SISchemaDeviceDynamicContext *deviceDynamicContext;
@property (retain, nonatomic) SISchemaDeviceFixedContext *deviceFixedContext;
@property (retain, nonatomic) SISchemaDictationContext *dictationContext;
@property (retain, nonatomic) SISchemaInvocation *invocation;
@property (retain, nonatomic) SISchemaLocation *location;
@property (retain, nonatomic) SISchemaPunchOut *punchOut;
@property (retain, nonatomic) SISchemaSiriCue *siriCue;
@property (retain, nonatomic) SISchemaUUFRPresented *uufrPresented;
@property (retain, nonatomic) SISchemaSpeechTranscription *speechTranscription;
@property (retain, nonatomic) SISchemaTextToSpeechBegin *textToSpeechBegin;
@property (retain, nonatomic) SISchemaTextToSpeechEnd *textToSpeechEnd;
@property (retain, nonatomic) SISchemaUIStateTransition *uiStateTransition;
@property (retain, nonatomic) SISchemaClientFlow *clientFlow;
@property (retain, nonatomic) SISchemaDialogOutput *dialogOutput;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (id)getTagForEventTypeClass:(Class)arg1;
+ (Class)getEventTypeClassForTag:(int)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)setEventType:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (int)getAnyEventType;

@end
