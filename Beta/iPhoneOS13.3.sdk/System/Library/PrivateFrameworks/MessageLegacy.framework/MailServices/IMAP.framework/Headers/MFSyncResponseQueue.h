/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <IMAP/MFBaseSyncResponseQueue.h>

@interface MFSyncResponseQueue : MFBaseSyncResponseQueue

{
    _Bool _shouldSyncFlags;
}

- (_Bool)addItem:(id)arg1;
- (_Bool)shouldSyncFlags;

@end
