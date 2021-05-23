/*
 Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NanoPhoneVoicemailBody, NanoPhoneVoicemailTranscript;

@interface NanoPhoneVoicemailMeta : PBCodable

{
    double _date;
    long long _identifier;
    long long _remoteUID;
    long long _voicemailNumber;
    NSString *_callbackNumber;
    NSString *_dataPath;
    int _duration;
    int _flags;
    NSString *_receiverDestinationID;
    NSString *_sender;
    NanoPhoneVoicemailBody *_voicemailBody;
    NanoPhoneVoicemailTranscript *_voicemailTranscript;
    struct {
        unsigned int date:1;
        unsigned int identifier:1;
        unsigned int remoteUID:1;
        unsigned int duration:1;
        unsigned int flags:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long voicemailNumber;
@property (nonatomic) _Bool hasIdentifier;
@property (nonatomic) long long identifier;
@property (nonatomic) _Bool hasRemoteUID;
@property (nonatomic) long long remoteUID;
@property (nonatomic) _Bool hasDate;
@property (nonatomic) double date;
@property (nonatomic, readonly) _Bool hasSender;
@property (retain, nonatomic) NSString *sender;
@property (nonatomic, readonly) _Bool hasCallbackNumber;
@property (retain, nonatomic) NSString *callbackNumber;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) int duration;
@property (nonatomic, readonly) _Bool hasDataPath;
@property (retain, nonatomic) NSString *dataPath;
@property (nonatomic) _Bool hasFlags;
@property (nonatomic) int flags;
@property (nonatomic, readonly) _Bool hasVoicemailBody;
@property (retain, nonatomic) NanoPhoneVoicemailBody *voicemailBody;
@property (nonatomic, readonly) _Bool hasVoicemailTranscript;
@property (retain, nonatomic) NanoPhoneVoicemailTranscript *voicemailTranscript;
@property (nonatomic, readonly) _Bool hasReceiverDestinationID;
@property (retain, nonatomic) NSString *receiverDestinationID;

+ (id)voicemailWithSYContext:(id)arg1;
+ (id)voicemailWithMessage:(id)arg1;
+ (id)xpcObjectAsArray:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (int)syncOperation;
- (id)syncId;
- (id)contactUsingContactStore:(id)arg1 withKeysToFetch:(id)arg2;
- (void)loadVoicemailBodyIfNeeded;
- (id)initWithVoicemail:(id)arg1;
- (id)contextWithSyncOperation:(int)arg1;
- (id)asXpcObject;
- (void)attachToXpcObject:(id)arg1;
- (id)displayNameFromContactStore:(id)arg1;
- (void)displayLabelFromContactStore:(id)arg1 withUpdateBlock:(CDUnknownBlockType)arg2;
- (id)callbackNumberOrSender;
- (id)voicemailDescription;

@end
