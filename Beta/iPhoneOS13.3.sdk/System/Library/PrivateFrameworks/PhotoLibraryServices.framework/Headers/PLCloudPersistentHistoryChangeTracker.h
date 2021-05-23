/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSPersistentHistoryToken, NSString;

@protocol OS_dispatch_queue, PLCloudChangeTrackerDelegate;

@interface PLCloudPersistentHistoryChangeTracker : NSObject

{
    NSPersistentHistoryToken *_lastKnownToken;
    NSPersistentHistoryToken *_lastKnownDeletionToken;
    NSManagedObjectContext *_context;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    id <PLCloudChangeTrackerDelegate> _delegate;
}

@property (weak, nonatomic) id <PLCloudChangeTrackerDelegate> delegate;
@property (copy, readonly) NSString *lastKnownTokenDescription;
@property (readonly) _Bool hasChangeTrackerToken;
@property (copy, readonly) NSString *lastKnownDeletionTokenDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *name;

+ (id)archivedDataWithToken:(id)arg1;
+ (id)unarchiveTokentWithData:(id)arg1;

- (void)disconnect;
- (_Bool)connect;
- (id)initWithManagedObjectContext:(id)arg1;
- (_Bool)isConnected;
- (void)changeTrackerDidReceiveChanges;
- (void)saveLastKnownChangeTrackerTokenToDisk;
- (void)clearToken;
- (void)forceTokenToCurrent;
- (id)fetchAllEvents;
- (id)fetchDeletionEvents;
- (void)updateLastKnownTokenToResult:(id)arg1;
- (void)updateLastKnownDeletionTokenToResult:(id)arg1;
- (id)lastKnownTokenFromDisk;
- (unsigned int)_registerToChangeHubNotification;
- (void)_unregisterToChangeHubNotification;
- (id)eventsResultFromPersistentHistoryToken:(id)arg1;
- (id)currentToken;
- (void)_updateLastKnownTokensToToken:(id)arg1;
- (void)_updateLastKnownDeletionTokenToToken:(id)arg1;

@end
