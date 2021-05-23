/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/Swift-Protocol.h>

@class EDPBInteractionEventAppBackground, EDPBInteractionEventAppLaunch, EDPBInteractionEventAppResume, EDPBInteractionEventFlagChanged, EDPBInteractionEventForwardDraftStarted, EDPBInteractionEventForwardSent, EDPBInteractionEventLinkClicked, EDPBInteractionEventMarkedMuteThread, EDPBInteractionEventMessageCopied, EDPBInteractionEventMessageFetched, EDPBInteractionEventMessageMoved, EDPBInteractionEventMessageSent, EDPBInteractionEventMessageViewEnd, EDPBInteractionEventMessageViewStart, EDPBInteractionEventReadChanged, EDPBInteractionEventReplyDraftStarted, EDPBInteractionEventReplySent;

@interface EDPBInteractionEvent : PBCodable <Swift>

{
    unsigned long long _timestamp;
    EDPBInteractionEventAppBackground *_appBackground;
    EDPBInteractionEventAppLaunch *_appLaunch;
    EDPBInteractionEventAppResume *_appResume;
    int _eventName;
    EDPBInteractionEventFlagChanged *_flagChanged;
    EDPBInteractionEventForwardDraftStarted *_forwardDraftStarted;
    EDPBInteractionEventForwardSent *_forwardSent;
    EDPBInteractionEventLinkClicked *_linkClicked;
    EDPBInteractionEventMarkedMuteThread *_markedMuteThread;
    EDPBInteractionEventMessageCopied *_messageCopied;
    EDPBInteractionEventMessageFetched *_messageFetched;
    EDPBInteractionEventMessageMoved *_messageMoved;
    EDPBInteractionEventMessageSent *_messageSent;
    EDPBInteractionEventMessageViewEnd *_messageViewEnd;
    EDPBInteractionEventMessageViewStart *_messageViewStart;
    EDPBInteractionEventReadChanged *_readChanged;
    EDPBInteractionEventReplyDraftStarted *_replyDraftStarted;
    EDPBInteractionEventReplySent *_replySent;
    unsigned int _sequenceNumber;
    struct {
        unsigned int timestamp:1;
        unsigned int eventName:1;
        unsigned int sequenceNumber:1;
    } _has;
}

@property (nonatomic) _Bool hasSequenceNumber;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasEventName;
@property (nonatomic) int eventName;
@property (nonatomic, readonly) _Bool hasMessageFetched;
@property (retain, nonatomic) EDPBInteractionEventMessageFetched *messageFetched;
@property (nonatomic, readonly) _Bool hasMessageSent;
@property (retain, nonatomic) EDPBInteractionEventMessageSent *messageSent;
@property (nonatomic, readonly) _Bool hasMessageMoved;
@property (retain, nonatomic) EDPBInteractionEventMessageMoved *messageMoved;
@property (nonatomic, readonly) _Bool hasMessageCopied;
@property (retain, nonatomic) EDPBInteractionEventMessageCopied *messageCopied;
@property (nonatomic, readonly) _Bool hasLinkClicked;
@property (retain, nonatomic) EDPBInteractionEventLinkClicked *linkClicked;
@property (nonatomic, readonly) _Bool hasAppLaunch;
@property (retain, nonatomic) EDPBInteractionEventAppLaunch *appLaunch;
@property (nonatomic, readonly) _Bool hasAppBackground;
@property (retain, nonatomic) EDPBInteractionEventAppBackground *appBackground;
@property (nonatomic, readonly) _Bool hasAppResume;
@property (retain, nonatomic) EDPBInteractionEventAppResume *appResume;
@property (nonatomic, readonly) _Bool hasFlagChanged;
@property (retain, nonatomic) EDPBInteractionEventFlagChanged *flagChanged;
@property (nonatomic, readonly) _Bool hasReadChanged;
@property (retain, nonatomic) EDPBInteractionEventReadChanged *readChanged;
@property (nonatomic, readonly) _Bool hasMessageViewStart;
@property (retain, nonatomic) EDPBInteractionEventMessageViewStart *messageViewStart;
@property (nonatomic, readonly) _Bool hasMessageViewEnd;
@property (retain, nonatomic) EDPBInteractionEventMessageViewEnd *messageViewEnd;
@property (nonatomic, readonly) _Bool hasReplyDraftStarted;
@property (retain, nonatomic) EDPBInteractionEventReplyDraftStarted *replyDraftStarted;
@property (nonatomic, readonly) _Bool hasForwardDraftStarted;
@property (retain, nonatomic) EDPBInteractionEventForwardDraftStarted *forwardDraftStarted;
@property (nonatomic, readonly) _Bool hasReplySent;
@property (retain, nonatomic) EDPBInteractionEventReplySent *replySent;
@property (nonatomic, readonly) _Bool hasForwardSent;
@property (retain, nonatomic) EDPBInteractionEventForwardSent *forwardSent;
@property (nonatomic, readonly) _Bool hasMarkedMuteThread;
@property (retain, nonatomic) EDPBInteractionEventMarkedMuteThread *markedMuteThread;

- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (int)messageFrameType;
- (id)ed_oneOfConcreteEvent;
- (id)eventNameAsString:(int)arg1;
- (int)StringAsEventName:(id)arg1;

@end
