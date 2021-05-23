/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFMailboxUid, NSString;

@interface MFDbJournal : NSObject

{
    NSString *_path;
    MFMailboxUid *_mailbox;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
    int _fd;
}

+ (void)initialize;
+ (id)legacyJournal;
+ (id)_journalForMailbox:(id)arg1;
+ (long long)mergeAllJournalsUsingConnection:(id)arg1;

- (void)dealloc;
- (id)initWithMailbox:(id)arg1;
- (long long)mergeUsingConnection:(id)arg1;
- (int)_processJournalFile:(id)arg1 connection:(id)arg2;
- (_Bool)_markMailboxForReconciliation:(_Bool)arg1 connection:(id)arg2;

@end
