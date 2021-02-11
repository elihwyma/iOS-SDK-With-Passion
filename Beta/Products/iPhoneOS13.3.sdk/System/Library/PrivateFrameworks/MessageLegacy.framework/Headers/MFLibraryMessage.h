/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibraryMessage : MFMailMessage <EDLibraryMessage> {
    _Atomic unsigned long long  _conversationFlags;
    long long  _libraryID;
    long long  _mailboxID;
    NSString * _messageID;
    long long  _originalMailboxID;
    NSArray * _references;
    NSString * _remoteID;
    unsigned long long  _size;
    unsigned int  _uid;
    unsigned long long  _uniqueRemoteId;
}

@property (nonatomic, readonly) MailAccount *account;
@property (nonatomic, readonly, copy) NSArray *bcc;
@property (nonatomic, readonly) <ECMimePart> *bodyPart;
@property (nonatomic, readonly, copy) NSArray *cc;
@property (nonatomic, readonly) long long conversationID;
@property (nonatomic, readonly) NSDate *dateReceived;
@property (nonatomic, readonly) NSDate *dateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSUUID *documentID;
@property (nonatomic, readonly) ECMessageFlags *flags;
@property (nonatomic, readonly, copy) NSArray *from;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MFMessageHeaders *headers;
@property (nonatomic, readonly, copy) NSDictionary *headersDictionary;
@property (nonatomic, readonly) bool isServerSearchResult;
@property (readonly) NSSet *labels;
@property (nonatomic, readonly) long long libraryID;
@property (nonatomic, readonly) ECAngleBracketIDHash *listIDHash;
@property (nonatomic, readonly, copy) NSArray *listUnsubscribe;
@property (nonatomic, readonly) MFMailboxUid *mailbox;
@property (nonatomic, readonly, copy) NSString *messageIDHeader;
@property (nonatomic, readonly) ECAngleBracketIDHash *messageIDHeaderHash;
@property (nonatomic, readonly) unsigned long long numberOfAttachments;
@property (getter=isPartOfExistingThread, nonatomic, readonly) bool partOfExistingThread;
@property (nonatomic, readonly, copy) NSString *persistentID;
@property (nonatomic, copy) NSArray *references;
@property (nonatomic, readonly, copy) NSString *remoteID;
@property (nonatomic, readonly, copy) NSArray *senders;
@property (nonatomic, readonly, copy) ECSubject *subject;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *to;

+ (id)log;
+ (id)messageWithLibraryID:(long long)arg1;

- (void).cxx_destruct;
- (id)_attachmentStorageLocation;
- (void)_forceLoadOfMessageSummaryFromProtectedStore;
- (id)_privacySafeDescription;
- (void)_updateUID;
- (id)account;
- (id)attachmentStorageLocation;
- (void)commit;
- (long long)compareByUidWithMessage:(id)arg1;
- (unsigned long long)conversationFlags;
- (id)copyMessageInfo;
- (id)dataConsumerForMimePart:(id)arg1;
- (id)dataPathForMimePart:(id)arg1;
- (unsigned long long)fileSize;
- (bool)hasTemporaryUid;
- (unsigned long long)hash;
- (id)initWithLibraryID:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLibraryMessage;
- (bool)isMessageContentsLocallyAvailable;
- (bool)isPartial;
- (id)library;
- (long long)libraryID;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (id)mailbox;
- (long long)mailboxID;
- (id)mailboxName;
- (void)markAsFlagged;
- (void)markAsForwarded;
- (void)markAsNotFlagged;
- (void)markAsNotViewed;
- (void)markAsReplied;
- (void)markAsViewed;
- (id)messageID;
- (unsigned long long)messageSize;
- (id)messageStore;
- (long long)originalMailboxID;
- (id)originalMailboxURL;
- (id)path;
- (id)persistentID;
- (id)preferredAccountToUseForReplying;
- (id)references;
- (id)remoteID;
- (void)setConversationFlags:(unsigned long long)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setHasTemporaryUid:(bool)arg1;
- (void)setIsPartial:(bool)arg1;
- (void)setMailboxID:(long long)arg1;
- (void)setMessageData:(id)arg1 isPartial:(bool)arg2;
- (void)setMessageFlags:(unsigned long long)arg1;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (void)setMessageSize:(unsigned long long)arg1;
- (void)setMutableInfoFromMessage:(id)arg1;
- (void)setOriginalMailboxID:(long long)arg1;
- (void)setPreferredEncoding:(unsigned int)arg1;
- (void)setReferences:(id)arg1;
- (void)setRemoteID:(id)arg1;
- (void)setRemoteID:(id)arg1 flags:(unsigned long long)arg2 size:(unsigned int)arg3 mailboxID:(long long)arg4 originalMailboxID:(long long)arg5;
- (void)setSummary:(id)arg1;
- (void)setUid:(unsigned int)arg1;
- (void)setUniqueRemoteId:(unsigned long long)arg1;
- (unsigned int)uid;
- (unsigned long long)uniqueRemoteId;

@end