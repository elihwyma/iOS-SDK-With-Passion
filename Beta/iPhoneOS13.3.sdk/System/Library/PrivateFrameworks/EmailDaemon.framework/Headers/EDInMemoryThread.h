/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

#import <EmailDaemon/Swift-Protocol.h>

@class EFQuery, EMMessage, EMThread, EMThreadScope, NSArray, NSMutableArray;

@protocol EMMailboxTypeResolver;

@interface EDInMemoryThread : NSObject <Swift>

{
    NSMutableArray *_messages;
    NSMutableArray *_dateSortedMessages;
    EMThread *_thread;
    EMThreadScope *_threadScope;
    EFQuery *_originatingQuery;
    id <EMMailboxTypeResolver> _mailboxTypeResolver;
    EMMessage *_displayMessage;
}

@property (nonatomic, readonly) EMThreadScope *threadScope;
@property (retain, nonatomic) EMThread *thread;
@property (nonatomic, readonly) EFQuery *originatingQuery;
@property (nonatomic, readonly) id <EMMailboxTypeResolver> mailboxTypeResolver;
@property (nonatomic, readonly) EMMessage *newestMessage;
@property (retain, nonatomic) EMMessage *displayMessage;
@property (copy, nonatomic, readonly) NSArray *messages;

+ (id)_dateSortDescriptors;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)addMessages:(id)arg1;
- (_Bool)_isSortedByDate:(id)arg1;
- (void)_recalculateDisplayMessage;
- (id)_createThreadWithObjectID:(id)arg1;
- (id)_combinedSenderList;
- (id)_combinedToList;
- (id)_combinedCCList;
- (id)_combinedFlags;
- (_Bool)_combinedHasUnflagged;
- (id)_combinedFlagColors;
- (_Bool)_combinedIsVIP;
- (_Bool)_combinedIsBlocked;
- (_Bool)_combinedHasAttachments;
- (id)_combinedMailboxes;
- (id)initWithMessages:(id)arg1 originatingQuery:(id)arg2 mailboxTypeResolver:(id)arg3;
- (void)_addMessagesToThread:(id)arg1;
- (id)_calculateAndApplyChange;
- (id)_calculateChangesAfterRemovingMessages:(id)arg1 applyingChanges:(id)arg2 threadIsEmpty:(_Bool *)arg3;
- (id)removeMessages:(id)arg1 threadIsEmpty:(_Bool *)arg2;
- (id)_dateSortedMessages;
- (id)changeMessages:(id)arg1 forKeyPaths:(id)arg2 threadIsEmpty:(_Bool *)arg3;
- (id)updateMessage:(id)arg1 fromOldObjectID:(id)arg2;

@end
