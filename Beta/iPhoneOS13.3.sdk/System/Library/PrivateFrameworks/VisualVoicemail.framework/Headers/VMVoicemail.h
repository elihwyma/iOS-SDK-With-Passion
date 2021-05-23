/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

#import <VisualVoicemail/Swift-Protocol.h>

@class NSData, NSDate, NSString, NSURL, VMVoicemailTranscript;

@interface VMVoicemail : NSObject <Swift>

{
    unsigned long long _remoteUID;
    unsigned long long _identifier;
    NSDate *_date;
    NSString *_senderDestinationID;
    NSString *_senderISOCountryCode;
    NSString *_callbackDestinationID;
    NSString *_callbackISOCountryCode;
    double _duration;
    NSURL *_dataURL;
    NSString *_receiverDestinationID;
    NSString *_receiverISOCountryCode;
    NSURL *_transcriptionURL;
    unsigned long long _flags;
}

@property (copy, nonatomic, readonly) NSData *data;
@property (nonatomic, readonly, getter=isBlocked) _Bool blocked;
@property (nonatomic, readonly, getter=isDataAvailable) _Bool dataAvailable;
@property (nonatomic, readonly, getter=isDeleted) _Bool deleted;
@property (nonatomic, readonly, getter=isDetached) _Bool detached;
@property (nonatomic, readonly, getter=isDownloading) _Bool downloading;
@property (nonatomic, readonly, getter=isTemporary) _Bool temporary;
@property (nonatomic, readonly, getter=isTrashed) _Bool trashed;
@property (nonatomic, readonly, getter=isUnread) _Bool unread;
@property (nonatomic) unsigned long long flags;
@property (nonatomic, readonly) NSString *sender;
@property (nonatomic, readonly) NSString *callbackNumber;
@property (nonatomic, readonly) NSString *dataPath;
@property (copy, nonatomic) NSString *callbackDestinationID;
@property (copy, nonatomic) NSString *callbackISOCountryCode;
@property (retain, nonatomic) NSURL *dataURL;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic) unsigned long long remoteUID;
@property (copy, nonatomic) NSString *senderDestinationID;
@property (copy, nonatomic) NSString *senderISOCountryCode;
@property (copy, nonatomic) NSString *receiverDestinationID;
@property (copy, nonatomic) NSString *receiverISOCountryCode;
@property (retain, nonatomic) NSURL *transcriptionURL;
@property (nonatomic) long long mailboxType;
@property (nonatomic, getter=isBlocked) _Bool blocked;
@property (nonatomic, getter=isDataAvailable) _Bool dataAvailable;
@property (nonatomic, getter=isDeleted) _Bool deleted;
@property (nonatomic, getter=isDetached) _Bool detached;
@property (nonatomic, getter=isDownloading) _Bool downloading;
@property (nonatomic, getter=isRead) _Bool read;
@property (nonatomic, getter=isTemporary) _Bool temporary;
@property (nonatomic, getter=isTranscriptionAvailable) _Bool transcriptionAvailable;
@property (nonatomic, getter=isTrashed) _Bool trashed;
@property (nonatomic) unsigned long long flags;
@property (nonatomic, readonly) _Bool hasCallbackNumber;
@property (nonatomic, readonly) VMVoicemailTranscript *transcript;
@property (nonatomic, readonly, getter=isTranscriptionRated) _Bool transcriptionRated;
@property (nonatomic, readonly) unsigned long long transcriptionState;

+ (_Bool)supportsSecureCoding;
+ (long long)mailboxTypeForFlags:(unsigned long long)arg1;
+ (unsigned long long)flagsByApplyingMailboxType:(long long)arg1 toFlags:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (id)initWithRecord:(const void *)arg1;
- (_Bool)isEqualToMessage:(id)arg1;
- (_Bool)hasSameContent:(id)arg1;
- (_Bool)hasSameFlags:(id)arg1;
- (_Bool)isTranscribing;
- (id)contactUsingContactStore:(id)arg1 withKeysToFetch:(id)arg2;
- (_Bool)isContactSuggested:(id)arg1;
- (void)setFlag:(unsigned long long)arg1 enabled:(_Bool)arg2;
- (_Bool)wasTranscriptionAttempted;
- (id)mailboxTypeDescription;
- (id)flagDescription;
- (id)displayNameUsingContactStore:(id)arg1;
- (id)displayLabelUsingContactStore:(id)arg1;
- (id)contactUsingContactStore:(id)arg1;
- (id)initWithVoicemailMessage:(id)arg1;
- (_Bool)hasFlags:(unsigned long long)arg1;
- (_Bool)doesNotHaveFlags:(unsigned long long)arg1;

@end
