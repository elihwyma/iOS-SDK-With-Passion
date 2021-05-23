/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class ICSelectorDelayer, NSDate, NSManagedObjectContext, NSPersistentHistoryToken, NSPersistentStore;

@protocol ICManagedObjectContextUpdaterDelegate, OS_dispatch_queue;

@interface ICManagedObjectContextUpdater : NSObject

{
    _Bool _listening;
    NSPersistentStore *_store;
    NSManagedObjectContext *_context;
    id <ICManagedObjectContextUpdaterDelegate> _delegate;
    NSPersistentHistoryToken *_previousHistoryToken;
    NSDate *_previousHistoryDate;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _numberOfCoalescedNotifications;
    ICSelectorDelayer *_delayer;
}

@property (weak, nonatomic) NSPersistentStore *store;
@property (weak, nonatomic) NSManagedObjectContext *context;
@property (retain, nonatomic) NSPersistentHistoryToken *previousHistoryToken;
@property (retain, nonatomic) NSDate *previousHistoryDate;
@property (nonatomic, getter=isListening) _Bool listening;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long numberOfCoalescedNotifications;
@property (retain, nonatomic) ICSelectorDelayer *delayer;
@property (weak, nonatomic) id <ICManagedObjectContextUpdaterDelegate> delegate;

+ (id)contextSaveNotificationFromPersistentHistoryResult:(id)arg1 ignoringContextName:(id)arg2 fromTransactionAuthor:(id)arg3 latestToken:(id *)arg4 latestTimestamp:(id *)arg5;

- (id)init;
- (void)dealloc;
- (id)persistentStoreCoordinator;
- (void)requestUpdate;
- (void)fetchChangeHistory;
- (id)initWithStore:(id)arg1 context:(id)arg2;
- (void)stopListeningForRemoteContextDidChangeNotifications;
- (void)handlePersistentStoreRemoteChangeNotification:(id)arg1;
- (void)processObejctsInChangeDictionary:(id)arg1;
- (void)startListeningForRemoteContextDidChangeNotifications;

@end
