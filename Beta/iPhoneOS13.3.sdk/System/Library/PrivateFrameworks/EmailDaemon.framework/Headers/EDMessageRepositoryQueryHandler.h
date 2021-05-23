/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

#import <EmailDaemon/Swift-Protocol.h>

@class EDMessagePersistence, EDPersistenceHookRegistry, EFQuery, EMObjectID, NSMapTable, NSSet, NSString;

@protocol EMMessageListItemQueryResultsObserver;

@interface EDMessageRepositoryQueryHandler : NSObject <Swift>

{
    struct atomic_flag _didStart;
    struct os_unfair_lock_s _summaryLock;
    NSSet *_mailboxes;
    EFQuery *_query;
    EDMessagePersistence *_messagePersistence;
    EDPersistenceHookRegistry *_hookRegistry;
    id <EMMessageListItemQueryResultsObserver> _resultsObserver;
    EMObjectID *_observationIdentifier;
    long long _dateSortOrder;
    NSMapTable *_summaryLoadersMapTable;
}

@property (retain, nonatomic) NSMapTable *summaryLoadersMapTable;
@property (nonatomic, readonly) struct os_unfair_lock_s summaryLock;
@property (copy, nonatomic, readonly) EFQuery *query;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) EDPersistenceHookRegistry *hookRegistry;
@property (nonatomic, readonly) id <EMMessageListItemQueryResultsObserver> resultsObserver;
@property (nonatomic, readonly) EMObjectID *observationIdentifier;
@property (copy, nonatomic, readonly) NSSet *mailboxes;
@property (nonatomic, readonly) long long dateSortOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)tearDown;
- (void)requestSummaryForMessageObjectID:(id)arg1;
- (void)test_tearDown;
- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 observer:(id)arg4 observationIdentifier:(id)arg5;
- (id)_distinctObjectIDs:(id)arg1 queryHandlerLog:(id)arg2;

@end
