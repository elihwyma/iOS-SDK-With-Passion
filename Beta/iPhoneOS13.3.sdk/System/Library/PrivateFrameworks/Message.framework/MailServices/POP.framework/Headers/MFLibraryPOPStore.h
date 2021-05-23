/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
 */

#import <Message/MFLibraryStore.h>

@class MFPOP3Connection;

@interface MFLibraryPOPStore : MFLibraryStore

{
    MFPOP3Connection *_connection;
    unsigned long long _serverMessageCount;
}

- (id)initWithMailboxUid:(id)arg1 readOnly:(_Bool)arg2;
- (void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;
- (_Bool)dataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 isComplete:(_Bool *)arg3 withConsumer:(id)arg4 downloadIfNecessary:(_Bool)arg5 didDownload:(_Bool *)arg6;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4 usePartDatas:(_Bool)arg5 didDownload:(_Bool *)arg6;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4 didDownload:(_Bool *)arg5;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 downloadIfNecessary:(_Bool)arg3 partial:(_Bool *)arg4;
- (unsigned long long)serverUnreadOnlyOnServerCount;
- (void)purgeMessages:(id)arg1;
- (_Bool)bodyFetchRequiresNetworkActivity;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;
- (id)bodyDataForMessage:(id)arg1 isComplete:(_Bool *)arg2 isPartial:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;
- (unsigned long long)serverMessageCount;
- (long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3;
- (void)messagesWereDeleted:(id)arg1;
- (id)messageForRemoteID:(id)arg1;
- (id)messageForRemoteID:(id)arg1 inMailbox:(id)arg2;
- (void)setServerMessageCount:(unsigned long long)arg1;
- (void)openSynchronouslyUpdatingMetadata:(_Bool)arg1;
- (void)setServerUnreadOnlyOnServerCount:(unsigned long long)arg1;

@end
