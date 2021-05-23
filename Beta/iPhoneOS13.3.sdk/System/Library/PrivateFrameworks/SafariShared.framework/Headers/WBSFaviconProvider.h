/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSCache, NSCalendar, NSMutableDictionary, NSString, NSURL, WBSFaviconProviderPersistenceController;

@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSFaviconProvider : NSObject

{
    NSMutableDictionary *_hostsToRequestsMap;
    NSCache *_responseCache;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_internalSavingQueue;
    NSMutableDictionary *_urlsToFaviconRecordsSavedDuringMigration;
    WBSFaviconProviderPersistenceController *_persistenceController;
    NSCalendar *_calendar;
    double _expirationInterval;
    long long _providerState;
    unsigned long long _privateDataRetentionCount;
    struct CGSize _scaledPreferredIconSize;
    CDUnknownBlockType _shouldCheckIntegrityWhenOpeningDatabaseBlock;
    _Bool _isReadOnly;
    id <WBSSiteMetadataProviderDelegate> _providerDelegate;
    NSURL *_baseURL;
    double _preferredIconScale;
    NSArray *_allIconScales;
    struct CGSize _preferredIconSize;
}

@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) struct CGSize preferredIconSize;
@property (nonatomic, readonly) double preferredIconScale;
@property (copy, nonatomic, readonly) NSArray *allIconScales;
@property (nonatomic, readonly) _Bool isReadOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <WBSSiteMetadataProviderDelegate> providerDelegate;
@property (nonatomic, readonly) _Bool providesFavicons;

+ (struct CGSize)defaultFaviconSize;

- (id)init;
- (void)dealloc;
- (_Bool)canHandleRequest:(id)arg1;
- (void)_registerRequest:(id)arg1;
- (id)persistenceController;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (id)initWithPersistenceBaseURL:(id)arg1 persistenceName:(id)arg2 preferredIconSize:(struct CGSize)arg3 atScale:(double)arg4 allScales:(id)arg5 isReadOnly:(_Bool)arg6 shouldCheckIntegrityWhenOpeningDatabaseBlock:(CDUnknownBlockType)arg7;
- (id)fallbackIconForRequest:(id)arg1;
- (void)savePendingChangesBeforeTermination;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(_Bool *)arg2;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(_Bool)arg2;
- (void)emptyCaches;
- (void)setUpWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateOutstandingRequestsAfterSuccessfulSetup;
- (void)_atomicallySaveImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4 size:(struct CGSize)arg5 isPrivate:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)cleanUpAfterPersistenceSetUpDidSucceed:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setUpPersistenceAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_isIconDateExpired:(id)arg1;
- (void)_atomicallyLinkPageURLs:(id)arg1 toIconWithInfo:(id)arg2 isPrivate:(_Bool)arg3;
- (void)_updateOutstandingRequestsForPageURL:(id)arg1 forceDidReceiveNewData:(_Bool)arg2;
- (void)_saveImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4 size:(struct CGSize)arg5 isPrivate:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_confirmImageDataShouldBeSaved:(id)arg1 size:(struct CGSize)arg2 pageURL:(id)arg3 iconURL:(id)arg4 includingPrivateData:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)flushPrivateDataFromMemoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_cachedResponseForRequest:(id)arg1;
- (void)_prepareAndSendResponseForRequests:(id)arg1 forceDidReceiveNewData:(_Bool)arg2;
- (id)_hostFromRequest:(id)arg1;
- (id)_responseCacheKeyForRequest:(id)arg1;
- (id)_responseDictionaryKeyForRequest:(id)arg1;
- (id)_hostFromURL:(id)arg1;
- (void)_removeCachedResponsesForURL:(id)arg1;
- (id)_requestsForHost:(id)arg1;
- (void)_addCachedResponse:(id)arg1 forRequest:(id)arg2;
- (void)_getIconForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)builtInIconForRequest:(id)arg1;
- (void)imageForRequestDuringPersistenceSetUp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_linkPageURL:(id)arg1 toIconWithInfo:(id)arg2 isPrivate:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithPersistenceBaseURL:(id)arg1 persistenceName:(id)arg2 preferredIconSize:(struct CGSize)arg3 atScale:(double)arg4 allScales:(id)arg5 shouldCheckIntegrityWhenOpeningDatabaseBlock:(CDUnknownBlockType)arg6;
- (long long)providerState;
- (void)shouldIconDataBeSavedForIconWithPageURL:(id)arg1 originalPageURL:(id)arg2 iconURL:(id)arg3 size:(struct CGSize)arg4 isPrivate:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)linkIconFromPageURL:(id)arg1 toCurrentPageURL:(id)arg2 isPrivate:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)saveFaviconImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4 size:(struct CGSize)arg5 isPrivate:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)removeAllIconsForURLStringsNotIn:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeIconForURLString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)retainPrivateData;
- (void)releasePrivateData;
- (void)_removeCachedResponsesForRequest:(id)arg1;

@end
