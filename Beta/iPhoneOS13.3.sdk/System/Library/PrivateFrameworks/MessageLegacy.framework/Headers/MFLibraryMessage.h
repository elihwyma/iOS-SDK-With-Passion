/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <MessageLegacy/MFMailMessage.h>

@class MFLock, NSMutableDictionary, NSMutableSet, NSString;

@interface MFLibraryMessage : MFMailMessage

{
    unsigned int _libraryID;
    NSString *_remoteID;
    unsigned int _uid;
    unsigned long long _uniqueRemoteId;
    unsigned long long _size;
    unsigned int _mailboxID;
    unsigned int _originalMailboxID;
    NSString *_messageID;
    unsigned long long _conversationFlags;
    NSMutableDictionary *_metadata;
    NSMutableSet *_metadataChangedKeys;
    MFLock *_metadataLock;
}

+ (id)messageWithLibraryID:(unsigned int)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)path;
- (unsigned int)uid;
- (void)commit;
- (id)account;
- (id)persistentID;
- (void)setUid:(unsigned int)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (id)library;
- (id)messageID;
- (unsigned long long)messageSize;
- (void)setMessageSize:(unsigned long long)arg1;
- (unsigned int)libraryID;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setSummary:(id)arg1;
- (id)_privacySafeDescription;
- (id)mailbox;
- (unsigned long long)conversationFlags;
- (id)messageStore;
- (id)remoteID;
- (id)initWithLibraryID:(unsigned int)arg1;
- (unsigned int)originalMailboxID;
- (void)_updateUID;
- (void)setRemoteID:(id)arg1;
- (void)setPreferredEncoding:(unsigned int)arg1;
- (_Bool)hasTemporaryUid;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (id)originalMailboxURL;
- (id)copyMessageInfo;
- (unsigned int)mailboxID;
- (void)setMailboxID:(unsigned int)arg1;
- (id)_attachmentStorageLocation;
- (void)_forceLoadOfMessageSummaryFromProtectedStore;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (void)setOriginalMailboxID:(unsigned int)arg1;
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
- (void)setConversationFlags:(unsigned long long)arg1;
- (void)setRemoteID:(const char *)arg1 flags:(unsigned long long)arg2 size:(unsigned int)arg3 mailboxID:(unsigned int)arg4 originalMailboxID:(unsigned int)arg5;
- (void)setMessageData:(id)arg1 isPartial:(_Bool)arg2;
- (id)dataConsumerForMimePart:(id)arg1;
- (_Bool)isLibraryMessage;
- (id)attachmentStorageLocation;
- (id)preferredEmailAddressToReplyWith;
- (void)_initializeMetadata;
- (id)metadataValueOfClass:(Class)arg1 forKey:(id)arg2;

@end
