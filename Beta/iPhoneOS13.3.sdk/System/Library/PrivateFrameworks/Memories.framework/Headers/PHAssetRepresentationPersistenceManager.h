/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/VEiOSSharedObject.h>

@class NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSRecursiveLock, NSString, PHAssetRepresentation, Reachability;

__attribute__((visibility("hidden")))
@interface PHAssetRepresentationPersistenceManager : VEiOSSharedObject

{
    _Bool _online;
    _Bool _bulkAssetRegistrationRequestCount;
    unsigned long long _reachabilityStatus;
    unsigned long long _cellularAuthorization;
    NSOperationQueue *_downloadQueue;
    NSHashTable *_universalPersistenceObservers;
    NSMapTable *_assetRepresentationToPersistenceObserverMap;
    NSMapTable *_localIdentifierToAssetRepresentationMap;
    NSMutableArray *_pendingRegistrationLocalIDs;
    NSMutableArray *_fetchResults;
    NSMutableSet *_deletedLocalIdentifiers;
    NSRecursiveLock *_observerLock;
    Reachability *_hostReachability;
    Reachability *_wifiReachability;
    Reachability *_internetReachability;
    NSRecursiveLock *_downloadsLock;
    NSMutableSet *_unreadDownloads;
    NSMutableSet *_recentDownloads;
    NSMutableDictionary *_recentDownloadsDict;
    NSMutableDictionary *_requestedDownloadsDict;
    PHAssetRepresentation *_pendingAssetRepresentation;
}

@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (retain, nonatomic) NSHashTable *universalPersistenceObservers;
@property (retain, nonatomic) NSMapTable *assetRepresentationToPersistenceObserverMap;
@property (retain, nonatomic) NSMapTable *localIdentifierToAssetRepresentationMap;
@property (nonatomic) _Bool bulkAssetRegistrationRequestCount;
@property (retain, nonatomic) NSMutableArray *pendingRegistrationLocalIDs;
@property (retain, nonatomic) NSMutableArray *fetchResults;
@property (retain, nonatomic) NSMutableSet *deletedLocalIdentifiers;
@property (retain, nonatomic) NSRecursiveLock *observerLock;
@property (retain, nonatomic) Reachability *hostReachability;
@property (retain, nonatomic) Reachability *wifiReachability;
@property (retain, nonatomic) Reachability *internetReachability;
@property (nonatomic, getter=isOnline) _Bool online;
@property (nonatomic) unsigned long long reachabilityStatus;
@property (retain, nonatomic) NSRecursiveLock *downloadsLock;
@property (retain, nonatomic) NSMutableSet *unreadDownloads;
@property (retain, nonatomic) NSMutableSet *recentDownloads;
@property (retain, nonatomic) NSMutableDictionary *recentDownloadsDict;
@property (retain, nonatomic) NSMutableDictionary *requestedDownloadsDict;
@property (retain, nonatomic) PHAssetRepresentation *pendingAssetRepresentation;
@property (nonatomic) unsigned long long cellularAuthorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (void)purgeSharedInstance;

- (id)init;
- (void)dealloc;
- (void)reachabilityChanged:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)cancelAllDownloads;
- (void)loadRequestedDownloads;
- (void)issueRequestedDownloads;
- (void)loadRecentDownloads;
- (id)recentDownloadsPath;
- (void)saveRecentDownloads;
- (void)submitDownloadOperationForAssetRepresentation:(id)arg1 userInitiated:(_Bool)arg2;
- (id)requestedDownloadsPath;
- (void)saveRequestedDownloads;
- (void)updateOnlineStatus;
- (void)requestDownloadOfAssetRepresentation:(id)arg1;
- (void)markAssetRepresentationAsRecent:(id)arg1;
- (void)markAssetRepresentationAsRequested:(id)arg1;
- (void)enumerateObserversOfAssetRepresentation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)unmarkAssetRepresentationAsRecent:(id)arg1;
- (void)unmarkAssetRepresentationAsRequested:(id)arg1;
- (void)markAssetRepresentationAsUnread:(id)arg1;
- (void)downloadOperationDidStart:(id)arg1;
- (void)downloadOperationDidFinish:(id)arg1;
- (void)downloadOperation:(id)arg1 didProgess:(double)arg2;
- (id)unreadDownloadedAssetRepresentations;
- (void)resetUnreadDownloads;
- (unsigned long long)numberOfUnreadDownloads;
- (void)requestDownloadOfAssetRepresentation:(id)arg1 userInitiated:(_Bool)arg2;
- (void)cancelDownloadOfAssetRepresentation:(id)arg1;
- (void)clearStaticCaches;
- (void)registerAssetRepresentation:(id)arg1;
- (void)setPersistenceState:(unsigned long long)arg1 ofAssetRepresentation:(id)arg2;
- (void)unregisterAssetRepresentation:(id)arg1;
- (unsigned long long)numberOfRequestedDownloads;
- (void)beginBulkAssetRegistration;
- (void)endBulkAssetRegistration;
- (id)recentlyDownloadedAssetRepresentations;
- (void)unregisterObserver:(id)arg1 forAssetRepresentation:(id)arg2;
- (void)registerObserver:(id)arg1 forAssetRepresentation:(id)arg2;

@end
