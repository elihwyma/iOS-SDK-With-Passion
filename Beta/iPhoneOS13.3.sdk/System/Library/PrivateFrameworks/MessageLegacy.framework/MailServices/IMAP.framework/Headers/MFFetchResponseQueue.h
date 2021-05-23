/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <MFBufferedQueue.h>

@class MFIMAPConnection, MFLibraryIMAPStore;

@interface MFFetchResponseQueue : MFBufferedQueue

{
    MFLibraryIMAPStore *_store;
    MFIMAPConnection *_connection;
    unsigned long long _numNewUIDs;
    unsigned long long _newMessageCount;
    unsigned long long _highestModSequence;
    unsigned long long _flags;
    _Bool _isSearching;
}

- (id)init;
- (_Bool)addItem:(id)arg1;
- (_Bool)handleItems:(id)arg1;
- (id)insertMessages:(id)arg1;
- (_Bool)shouldAddUID:(unsigned long long)arg1;
- (id)messageToSyncFlagsForUID:(unsigned int)arg1;

@end
