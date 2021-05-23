/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, NSURL, WBSCoalescedAsynchronousWriter;

@protocol OS_dispatch_queue;

@interface WBSQuickWebsiteSearchController : NSObject

{
    NSURL *_searchDescriptionsURL;
    _Bool _hasBegunLoadingFromDisk;
    NSObject<OS_dispatch_queue> *_quickWebsiteSearchProvidersBySourcePageURLStringAccessQueue;
    NSMutableDictionary *_quickWebsiteSearchProvidersByHost;
    NSMutableDictionary *_openSearchDescriptionsByDescriptionDocumentURLString;
    NSMutableDictionary *_hostSetsByOpenSearchDescriptionDocumentURLString;
    WBSCoalescedAsynchronousWriter *_writer;
    _Bool _quickWebsiteSearchProvidersLoadedFromDisk;
}

@property _Bool quickWebsiteSearchProvidersLoadedFromDisk;
@property (nonatomic, readonly) NSArray *quickWebsiteSearchHosts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedController;

- (void)clear;
- (id)_dictionaryRepresentation;
- (void)_loadFromDisk;
- (void)savePendingChangesBeforeTermination;
- (id)_initWithSearchDescriptionsURL:(id)arg1;
- (void)beginLoadingFromDiskIfNeeded;
- (void)_didCollectOpenSearchDescription:(id)arg1;
- (void)_didFinishLoadingFromDisk;
- (void)_resetCachedDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_saveToDiskSoon;
- (_Bool)_quickWebsiteSearchProviderHasSearchURLTemplateStringOnAccessQueue:(id)arg1;
- (void)_sendNotification:(id)arg1 forQuickWebsiteSearchProvider:(id)arg2;
- (void)_addHost:(id)arg1 toOpenSearchDescriptionWithDocumentURL:(id)arg2;
- (void)_removeHost:(id)arg1 fromOpenSearchDescriptionWithDocumentURL:(id)arg2;
- (void)removeProvidersWithHosts:(id)arg1;
- (id)openSearchDescriptionForOpenSearchDescriptionURLString:(id)arg1;
- (_Bool)_shouldRemoveQuickWebsiteSearchProvider:(id)arg1;
- (void)_pruneUnusedQuickWebsiteSearchProviders;
- (id)quickWebsiteSearchProvider:(id)arg1 openSearchDescriptionForOpenSearchDescriptionURLString:(id)arg2;
- (void)noteProvidersAreStale;
- (void)removeProvidersAddedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (id)providersMatchingQueryString:(id)arg1;
- (void)didPerformSearchWithProvider:(id)arg1;
- (void)setSearchURLTemplateFromForm:(id)arg1 forSourcePageURLString:(id)arg2;
- (void)setOpenSearchDescriptionURLString:(id)arg1 forSourcePageURLString:(id)arg2;
- (id)providerForSourcePageURLString:(id)arg1;
- (void)removeProviderWithHost:(id)arg1;

@end
