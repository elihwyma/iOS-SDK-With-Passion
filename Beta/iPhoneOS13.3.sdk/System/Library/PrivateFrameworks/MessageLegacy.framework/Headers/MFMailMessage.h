/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <MIME/MFMessage.h>

@class MFMailboxUid, MFMessageInfo, NSString, NSURL;

@interface MFMailMessage : MFMessage

{
    unsigned long long _messageFlags;
    unsigned long long _modSequenceNumber;
    MFMessageInfo *_info;
    NSURL *_globalMessageURL;
    _Bool _shouldUseMailDrop;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int uid;
@property (nonatomic, readonly) unsigned int dateReceivedInterval;
@property (nonatomic, readonly) unsigned int dateSentInterval;
@property (nonatomic, readonly) long long conversationHash;
@property (nonatomic, readonly) unsigned int mailboxID;
@property (nonatomic, readonly) long long messageIDHash;
@property (nonatomic, readonly) _Bool flagged;
@property (nonatomic, readonly) _Bool read;
@property (nonatomic, readonly) _Bool deleted;
@property (nonatomic, readonly) _Bool senderVIP;
@property (nonatomic, readonly, getter=isKnownToHaveAttachments) _Bool knownToHaveAttachments;
@property (nonatomic, readonly, getter=isLibraryMessage) _Bool libraryMessage;
@property (nonatomic, readonly) unsigned int libraryID;
@property (nonatomic, readonly) MFMailboxUid *mailbox;
@property unsigned long long modSequenceNumber;
@property (nonatomic) _Bool shouldUseMailDrop;
@property (nonatomic) unsigned long long messageFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;

+ (unsigned int)validatePriority:(int)arg1;
+ (id)forwardedMessagePrefixWithSpacer:(_Bool)arg1;
+ (Class)dataMessageStoreToUse;
+ (unsigned int)displayablePriorityForPriority:(int)arg1;
+ (id)externalDataTypeIdentifiers;

- (void)dealloc;
- (id)URL;
- (int)priority;
- (id)from;
- (id)account;
- (void)setSummary:(id)arg1;
- (unsigned long long)numberOfAttachments;
- (id)_privacySafeDescription;
- (unsigned long long)conversationFlags;
- (id)messageStore;
- (_Bool)isSearchResultWithBogusRemoteId;
- (id)loadMeetingData;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (id)originalMailboxURL;
- (id)copyMessageInfo;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (id)bestAlternativePart:(_Bool *)arg1;
- (id)listUnsubscribe;
- (void)setMutableInfoFromMessage:(id)arg1;
- (void)markAsViewed;
- (void)markAsNotViewed;
- (void)markAsFlagged;
- (void)markAsNotFlagged;
- (void)markAsReplied;
- (void)markAsForwarded;
- (void)setConversationFlags:(unsigned long long)arg1;
- (id)globalMessageURL;
- (void)setPriorityFromHeaders:(id)arg1;
- (id)mailMessageStore;
- (id)loadMeetingExternalID;
- (id)loadMeetingMetadata;
- (id)remoteMailboxURL;
- (_Bool)shouldSetSummary;
- (id)externalConversationID;
- (id)bestAlternativePart;
- (_Bool)answered;
- (_Bool)junk;
- (_Bool)conversationVIP;
- (_Bool)conversationMuted;
- (void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 messageIDHash:(long long)arg8 conversationIDHash:(long long)arg9 summary:(id)arg10 withOptions:(unsigned int)arg11;

@end
