/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <MIME/MFMessage.h>

@class ECAngleBracketIDHash, ECMessageFlags, ECSubject, EMMessageObjectID, MFMailboxUid, MFMessageHeaders, MFMessageInfo, MailAccount, NSArray, NSDate, NSDictionary, NSSet, NSString, NSURL, NSUUID;

@protocol ECMimePart;

@interface MFMailMessage : MFMessage

{
    unsigned long long _messageFlags;
    unsigned long long _modSequenceNumber;
    MFMessageInfo *_info;
    NSURL *_globalMessageURL;
    _Bool _useInternalSourceIsManaged;
    _Bool _sourceIsManaged;
    _Bool _shouldUseMailDrop;
}

@property (nonatomic, readonly) EMMessageObjectID *objectID;
@property (nonatomic, readonly) MFMailboxUid *mailbox;
@property unsigned long long modSequenceNumber;
@property (nonatomic) _Bool shouldUseMailDrop;
@property (nonatomic) unsigned long long messageFlags;
@property (nonatomic, readonly) MFMessageHeaders *headers;
@property (nonatomic, readonly) MailAccount *account;
@property (nonatomic) _Bool sourceIsManaged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *persistentID;
@property (copy, nonatomic, readonly) ECSubject *subject;
@property (copy, nonatomic, readonly) NSArray *from;
@property (copy, nonatomic, readonly) NSArray *to;
@property (copy, nonatomic, readonly) NSArray *cc;
@property (copy, nonatomic, readonly) NSArray *bcc;
@property (copy, nonatomic, readonly) NSArray *senders;
@property (nonatomic, readonly) NSDate *dateReceived;
@property (nonatomic, readonly) NSDate *dateSent;
@property (copy, nonatomic, readonly) NSArray *listUnsubscribe;
@property (copy, nonatomic, readonly) NSString *remoteID;
@property (nonatomic, readonly) long long conversationID;
@property (nonatomic, readonly) _Bool isServerSearchResult;
@property (nonatomic, readonly) ECMessageFlags *flags;
@property (nonatomic, readonly, getter=isPartOfExistingThread) _Bool partOfExistingThread;
@property (nonatomic, readonly) id <ECMimePart> bodyPart;
@property (copy, nonatomic, readonly) NSDictionary *headersDictionary;
@property (copy, nonatomic, readonly) NSString *messageIDHeader;
@property (nonatomic, readonly) ECAngleBracketIDHash *messageIDHeaderHash;
@property (readonly) NSSet *labels;
@property (copy, nonatomic, readonly) NSArray *references;
@property (copy, nonatomic, readonly) NSUUID *documentID;
@property (nonatomic, readonly) unsigned long long numberOfAttachments;
@property (nonatomic, readonly) ECAngleBracketIDHash *listIDHash;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (nonatomic, readonly) unsigned int uid;
@property (nonatomic, readonly) unsigned int dateReceivedInterval;
@property (nonatomic, readonly) unsigned int dateSentInterval;
@property (nonatomic, readonly) long long conversationHash;
@property (nonatomic, readonly) long long mailboxID;
@property (nonatomic, readonly) long long messageIDHash;
@property (nonatomic, readonly) _Bool flagged;
@property (nonatomic, readonly) _Bool read;
@property (nonatomic, readonly) _Bool deleted;
@property (nonatomic, readonly) _Bool senderVIP;
@property (nonatomic, readonly, getter=isKnownToHaveAttachments) _Bool knownToHaveAttachments;
@property (nonatomic, readonly, getter=isLibraryMessage) _Bool libraryMessage;
@property (nonatomic, readonly) long long libraryID;

+ (unsigned int)validatePriority:(int)arg1;
+ (id)forwardedMessagePrefixWithSpacer:(_Bool)arg1;
+ (Class)dataMessageStoreToUse;
+ (unsigned int)displayablePriorityForPriority:(int)arg1;

- (id)URL;
- (int)priority;
- (void)setSummary:(id)arg1;
- (unsigned long long)conversationFlags;
- (id)messageStore;
- (_Bool)isSearchResultWithBogusRemoteId;
- (id)loadMeetingData;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (id)originalMailboxURL;
- (id)copyMessageInfo;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (id)bestAlternativePart:(_Bool *)arg1;
- (void)setMutableInfoFromMessage:(id)arg1;
- (void)markAsViewed;
- (void)markAsNotViewed;
- (void)markAsFlagged;
- (void)markAsNotFlagged;
- (void)markAsReplied;
- (void)markAsForwarded;
- (id)preferredAccountToUseForReplying;
- (void)setConversationFlags:(unsigned long long)arg1;
- (id)globalMessageURL;
- (void)setPriorityFromHeaders:(id)arg1;
- (id)mailMessageStore;
- (void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 summary:(id)arg8 withOptions:(unsigned int)arg9;
- (id)preferredEmailAddressToReplyWith;
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

@end
