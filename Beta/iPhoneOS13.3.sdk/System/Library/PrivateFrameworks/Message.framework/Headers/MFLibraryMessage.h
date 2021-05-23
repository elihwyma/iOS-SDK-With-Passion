/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFMailMessage.h>

@class ECAngleBracketIDHash, ECMessageFlags, ECSubject, MFMailboxUid, MFMessageHeaders, MailAccount, NSArray, NSDate, NSDictionary, NSSet, NSString, NSUUID;

@protocol ECMimePart;

@interface MFLibraryMessage : MFMailMessage

{
    long long _libraryID;
    NSString *_remoteID;
    unsigned int _uid;
    unsigned long long _uniqueRemoteId;
    unsigned long long _size;
    long long _mailboxID;
    long long _originalMailboxID;
    NSString *_messageID;
    _Atomic unsigned long long _conversationFlags;
    NSArray *_references;
}

@property (nonatomic, readonly) MFMailboxUid *mailbox;
@property (nonatomic, readonly) MailAccount *account;
@property (nonatomic, readonly) MFMessageHeaders *headers;
@property (copy, nonatomic) NSArray *references;
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
@property (copy, nonatomic, readonly) NSUUID *documentID;
@property (nonatomic, readonly) unsigned long long numberOfAttachments;
@property (nonatomic, readonly) ECAngleBracketIDHash *listIDHash;
@property (nonatomic, readonly) long long libraryID;

+ (id)log;
+ (id)messageWithLibraryID:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)path;
- (unsigned long long)fileSize;
- (unsigned int)uid;
- (void)commit;
- (void)setUid:(unsigned int)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (id)library;
- (id)messageID;
- (unsigned long long)messageSize;
- (void)setMessageSize:(unsigned long long)arg1;
- (void)setSummary:(id)arg1;
- (id)_privacySafeDescription;
- (unsigned long long)conversationFlags;
- (id)messageStore;
- (id)initWithLibraryID:(long long)arg1;
- (long long)originalMailboxID;
- (void)_updateUID;
- (void)setRemoteID:(id)arg1;
- (void)setPreferredEncoding:(unsigned int)arg1;
- (_Bool)hasTemporaryUid;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (id)originalMailboxURL;
- (id)copyMessageInfo;
- (long long)mailboxID;
- (void)setMailboxID:(long long)arg1;
- (id)_attachmentStorageLocation;
- (void)_forceLoadOfMessageSummaryFromProtectedStore;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (void)setOriginalMailboxID:(long long)arg1;
- (unsigned long long)uniqueRemoteId;
- (void)setUniqueRemoteId:(unsigned long long)arg1;
- (_Bool)isPartial;
- (void)setIsPartial:(_Bool)arg1;
- (_Bool)isMessageContentsLocallyAvailable;
- (void)setHasTemporaryUid:(_Bool)arg1;
- (id)mailboxName;
- (long long)compareByUidWithMessage:(id)arg1;
- (void)setMessageFlags:(unsigned long long)arg1;
- (void)setMutableInfoFromMessage:(id)arg1;
- (id)dataPathForMimePart:(id)arg1;
- (void)markAsViewed;
- (void)markAsNotViewed;
- (void)markAsFlagged;
- (void)markAsNotFlagged;
- (void)markAsReplied;
- (void)markAsForwarded;
- (id)preferredAccountToUseForReplying;
- (void)setConversationFlags:(unsigned long long)arg1;
- (void)setRemoteID:(id)arg1 flags:(unsigned long long)arg2 size:(unsigned int)arg3 mailboxID:(long long)arg4 originalMailboxID:(long long)arg5;
- (void)setMessageData:(id)arg1 isPartial:(_Bool)arg2;
- (id)dataConsumerForMimePart:(id)arg1;
- (_Bool)isLibraryMessage;
- (id)attachmentStorageLocation;

@end
