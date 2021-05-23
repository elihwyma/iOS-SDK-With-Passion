/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <MFBufferedQueue.h>

@class MFIMAPConnection, MFLibraryIMAPStore, NSArray, NSMutableArray, NSString;

@interface MFBaseSyncResponseQueue : MFBufferedQueue

{
    MFLibraryIMAPStore *_store;
    MFIMAPConnection *_connection;
    NSString *_url;
    unsigned long long _currentUID;
    NSMutableArray *_missingUIDs;
    NSArray *_serverMessages;
    _Bool _shouldCompact;
    _Bool _shouldFetch;
    _Bool _isSearching;
}

- (id)init;
- (_Bool)handleItems:(id)arg1;
- (unsigned long long)uidForItem:(id)arg1;
- (_Bool)shouldSyncFlags;
- (unsigned long long)flagsForItem:(id)arg1;
- (id)sequenceIdentifierForItem:(id)arg1;

@end
