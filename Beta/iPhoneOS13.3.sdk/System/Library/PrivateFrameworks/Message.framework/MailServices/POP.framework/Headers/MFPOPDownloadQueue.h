/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
 */

#import <Message/MFBufferedQueue.h>

@class MFMailMessageLibrary, MFMailboxUid, MFSqliteMessageIDStore, NSDate;

@interface MFPOPDownloadQueue : MFBufferedQueue

{
    MFSqliteMessageIDStore *_uidStore;
    MFMailMessageLibrary *_library;
    MFMailboxUid *_mailbox;
    NSDate *startDate;
}

- (id)init;
- (_Bool)addItem:(id)arg1;
- (unsigned long long)sizeForItem:(id)arg1;
- (_Bool)handleItems:(id)arg1;

@end
