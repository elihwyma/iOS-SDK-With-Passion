/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <IMAP/MFBaseSyncResponseQueue.h>

@class NSIndexSet, NSMutableIndexSet;

@interface MFSearchResponseQueue : MFBaseSyncResponseQueue

{
    NSMutableIndexSet *indexSet;
    unsigned int limit;
}

@property (retain, nonatomic, readonly) NSIndexSet *indexSet;

- (id)init;
- (void)dealloc;
- (_Bool)flush;
- (_Bool)addItem:(id)arg1;
- (unsigned long long)uidForItem:(id)arg1;
- (unsigned long long)flagsForItem:(id)arg1;

@end
