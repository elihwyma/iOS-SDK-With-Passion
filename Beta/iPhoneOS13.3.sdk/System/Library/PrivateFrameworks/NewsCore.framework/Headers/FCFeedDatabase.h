/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSEntityDescription, NSManagedObjectContext, NSMutableDictionary, NSMutableSet, NSPersistentStore, NSString, NSURL;

@protocol FCOperationThrottler, OS_dispatch_queue;

@interface FCFeedDatabase : NSObject <Swift>

{
    unsigned short _version;
    int _nextFeedLookupID;
    NSURL *_parentDirectoryURL;
    long long _usage;
    long long _endpoint;
    NSObject<OS_dispatch_queue> *_initQueue;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStore *_persistentStore;
    NSEntityDescription *_feedEntity;
    NSEntityDescription *_feedSegmentEntity;
    NSEntityDescription *_feedItemIndexEntity;
    NSEntityDescription *_feedItemEntity;
    NSMutableDictionary *_cachedFeedsByID;
    NSMutableSet *_modifiedFeedIDs;
    id <FCOperationThrottler> _saveThrottler;
}

@property (nonatomic) long long usage;
@property (nonatomic) unsigned short version;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *initQueue;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSPersistentStore *persistentStore;
@property (retain, nonatomic) NSEntityDescription *feedEntity;
@property (retain, nonatomic) NSEntityDescription *feedSegmentEntity;
@property (retain, nonatomic) NSEntityDescription *feedItemIndexEntity;
@property (retain, nonatomic) NSEntityDescription *feedItemEntity;
@property (retain, nonatomic) NSMutableDictionary *cachedFeedsByID;
@property (nonatomic) int nextFeedLookupID;
@property (retain, nonatomic) NSMutableSet *modifiedFeedIDs;
@property (retain, nonatomic) id <FCOperationThrottler> saveThrottler;
@property (copy, nonatomic, readonly) NSURL *parentDirectoryURL;
@property (nonatomic, readonly) long long endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)temporaryFeedDatabaseWithEndpoint:(long long)arg1;
+ (unsigned short)currentFeedDatabaseVersion;

- (void)teardown;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (id)initWithParentDirectoryURL:(id)arg1 usage:(long long)arg2 endpoint:(long long)arg3;
- (void)_performWithMOCAndWait:(CDUnknownBlockType)arg1;
- (id)_feedsForLookups:(id)arg1;
- (id)_shortCircuitLookup:(id)arg1 withFeed:(id)arg2;
- (id)_feedItemsForLookups:(id)arg1 withFeedsByID:(id)arg2;
- (id)_serviceLookup:(id)arg1 withFeed:(id)arg2 feedItems:(id)arg3;
- (id)_feedItemsForLookups:(id)arg1 withFeedsByID:(id)arg2 boundedByCount:(unsigned long long)arg3;
- (void)d_sanityCheckFeed:(id)arg1;
- (void)_initMOC;
- (id)performDatabaseLookups:(id)arg1;
- (id)performDatabaseLookups:(id)arg1 boundedByCount:(unsigned long long)arg2;
- (void)saveFeedItems:(id)arg1 forFeedID:(id)arg2 insertionToken:(id)arg3 requestDate:(id)arg4 followingCKCursor:(id)arg5 reachedToOrder:(_Bool)arg6 extent:(unsigned long long)arg7 reachedEnd:(_Bool)arg8;

@end
