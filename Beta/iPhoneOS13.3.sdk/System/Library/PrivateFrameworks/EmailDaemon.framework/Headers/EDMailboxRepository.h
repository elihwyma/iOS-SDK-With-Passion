/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDMailboxPersistence, NSString;

@protocol OS_dispatch_queue;

@interface EDMailboxRepository : NSObject

{
    EDMailboxPersistence *_mailboxPersistence;
    NSObject<OS_dispatch_queue> *_serializationQueue;
}

@property (retain, nonatomic) EDMailboxPersistence *mailboxPersistence;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serializationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (void)getMailboxesWithCompletion:(CDUnknownBlockType)arg1;
- (void)startObservingMailboxChangesWithChangeObserver:(id)arg1 observationIdentifier:(id)arg2;
- (void)cancelObservation:(id)arg1;
- (void)refreshMailboxList;
- (void)performMailboxChangeAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)mailboxObjectIDsForMailboxType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)mailboxTypeForMailboxObjectID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithMailboxPersistence:(id)arg1;
- (_Bool)_performCreateMailboxChangeAction:(id)arg1;
- (_Bool)_performDeleteMailboxChangeAction:(id)arg1;
- (_Bool)_performMoveMailboxChangeAction:(id)arg1;
- (_Bool)_performRenameMailboxChangeAction:(id)arg1;

@end
