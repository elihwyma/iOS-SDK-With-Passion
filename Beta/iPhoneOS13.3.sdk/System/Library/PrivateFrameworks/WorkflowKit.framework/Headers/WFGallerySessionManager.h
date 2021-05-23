/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class CKContainer, CKDatabase, NSArray, NSCache;

@interface WFGallerySessionManager : NSObject

{
    _Bool _performExpensiveFetchOperations;
    CKContainer *_container;
    CKDatabase *_database;
    NSArray *_preferredLocalizations;
    NSCache *_workflowSearchCache;
    NSCache *_collectionSearchCache;
    NSCache *_pageCache;
    NSCache *_workflowCache;
    NSCache *_bannerImageCache;
}

@property (nonatomic, readonly) CKDatabase *database;
@property (copy, nonatomic, readonly) NSArray *preferredLocalizations;
@property (nonatomic, readonly) NSCache *workflowSearchCache;
@property (nonatomic, readonly) NSCache *collectionSearchCache;
@property (nonatomic, readonly) NSCache *pageCache;
@property (nonatomic, readonly) NSCache *workflowCache;
@property (nonatomic, readonly) NSCache *bannerImageCache;
@property (nonatomic, readonly) _Bool performExpensiveFetchOperations;
@property (nonatomic, readonly) CKContainer *container;

+ (id)sharedManager;
+ (id)defaultPreferredLocalizations;

- (id)init;
- (id)initWithContainer:(id)arg1 preferredLocalizations:(id)arg2 performExpensiveFetchOperations:(_Bool)arg3;
- (id)createItemRequest;
- (void)getHomeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getHomeWithPreferredLanguages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPageWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getImageForBanner:(id)arg1 size:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)preferredPageInPages:(id)arg1 preferredLanguages:(id)arg2;
- (id)loadWorkflowInGalleryWorkflow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)searchWorkflowsAndCollections:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)searchWorkflows:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)searchUsingWebServicesForItem:(Class)arg1 query:(id)arg2 queryFilter:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)queryFilterForTokenizedKey:(id)arg1 words:(id)arg2 endsWithSpace:(_Bool)arg3;
- (id)searchCollections:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)sortAndFilterSearchResults:(id)arg1 searchedWords:(id)arg2;
- (id)getWorkflowForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getCollectionForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getCurrentUserIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)updateItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unshareSharedShortcut:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createBannerWithName:(id)arg1 detailPage:(id)arg2 iphone2xImage:(id)arg3 iphone3xImage:(id)arg4 ipadImage:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)createCollection:(id)arg1 small2xImage:(id)arg2 large2xImage:(id)arg3 small3xImage:(id)arg4 large3xImage:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)updatePage:(id)arg1 withName:(id)arg2 banners:(id)arg3 collections:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)updateBanner:(id)arg1 withName:(id)arg2 detailPage:(id)arg3 iphone2xImage:(id)arg4 iphone3xImage:(id)arg5 ipadImage:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)updateCollection:(id)arg1 small2xImage:(id)arg2 large2xImage:(id)arg3 small3xImage:(id)arg4 large3xImage:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)updateWorkflow:(id)arg1 withName:(id)arg2 shortDescription:(id)arg3 longDescription:(id)arg4 workflow:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)deleteCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteBanner:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uploadWorkflow:(id)arg1 withName:(id)arg2 shortDescription:(id)arg3 longDescription:(id)arg4 private:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;

@end
