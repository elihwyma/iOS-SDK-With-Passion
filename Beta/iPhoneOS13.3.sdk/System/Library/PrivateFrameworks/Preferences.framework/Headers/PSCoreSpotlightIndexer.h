/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class CSSearchQuery, CSSearchableIndex, CSTopHitSearchQuery, NSDate, NSMutableArray;

@protocol OS_dispatch_queue;

@interface PSCoreSpotlightIndexer : NSObject

{
    _Bool _skipManifests;
    CSSearchableIndex *_prefsSearchableIndex;
    NSObject<OS_dispatch_queue> *_spotlightIndexQueue;
    CSTopHitSearchQuery *_searchQuery;
    CSSearchQuery *_hasItemsQuery;
    NSMutableArray *_indexFromControllerLog;
}

@property (retain, nonatomic) CSSearchableIndex *prefsSearchableIndex;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *spotlightIndexQueue;
@property (retain, nonatomic) CSTopHitSearchQuery *searchQuery;
@property (retain, nonatomic) CSSearchQuery *hasItemsQuery;
@property (retain, nonatomic) NSMutableArray *indexFromControllerLog;
@property (nonatomic, readonly) _Bool needsIndex;
@property (nonatomic, readonly) NSDate *lastIndexDate;
@property (nonatomic) _Bool skipManifests;

+ (id)sharedInstance;
+ (id)searchIndexIdentifier;
+ (char *)spotlightIndexQueueIdentifier;

- (id)blacklistedControllers;
- (id)lastIndexBuild;
- (id)lastIndexLanguage;
- (void)setNeedsIndex:(_Bool)arg1;
- (void)setLastIndexDate:(id)arg1;
- (void)setLastIndexBuild:(id)arg1;
- (void)setLastIndexLanguage:(id)arg1;
- (id)searchableItemClassIdentifier;
- (id)searchableFirstPartyItemClassIdentifier;
- (id)manifestsFromDirectory:(id)arg1;
- (id)searchableItemsFromManifest:(id)arg1 specifier:(id)arg2 bundle:(id)arg3;
- (void)_indexSearchableItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteIndexWithDomainIdentifiers:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performYukonManifestMigrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)indexManifestBundlesAtURLs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setHasIndexed;
- (id)csSearchableItemsFromSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 parentSpecifierNames:(id)arg6;
- (void)deleteIndexWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_deleteSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_bundleForSpecifier:(id)arg1 parentBundle:(id)arg2;
- (id)searchableItemsFromManifestsForSpecifier:(id)arg1 bundle:(id)arg2;
- (id)_specifiersForSpecifier:(id)arg1 bundle:(id)arg2 parentBundle:(id)arg3;
- (id)_urlForSpecifier:(id)arg1 identifier:(id)arg2 category:(id)arg3 childCategory:(id *)arg4 prefix:(id)arg5 path:(id *)arg6 baseURL:(id)arg7 shouldLinkToRow:(_Bool)arg8;
- (id)_descriptionForSpecifierName:(id)arg1 withParentSpecifierNames:(id)arg2;
- (id)searchableItemForSpecifier:(id)arg1 bundleID:(id)arg2 category:(id)arg3 keywords:(id)arg4 url:(id)arg5 description:(id)arg6;
- (id)searchableItemsFromSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 parentSpecifierNames:(id)arg6;
- (void)_indexChunkOfSearchableItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_urlsFromManifestForSpecifier:(id)arg1 bundle:(id)arg2;
- (id)descriptionForCSSearchableItem:(id)arg1;
- (id)_rankingHintScoreForURL:(id)arg1;
- (id)searchableThirdPartyItemClassIdentifier;
- (id)_specifiersPlistPathForSpecifier:(id)arg1 bundle:(id)arg2 parentBundle:(id)arg3;
- (_Bool)controllerIsBlacklisted:(id)arg1;
- (void)setNeedsIndex;
- (id)searchableItemAttributeSetClassIdenfitier;
- (void)hasfirstPartyIndexItems:(CDUnknownBlockType)arg1;
- (void)indexManifestBundlesAtURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)topHitSearchForString:(id)arg1 keyboardLanguage:(id)arg2 foundItemsHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)reindexSpecifiersIfNeeded:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(_Bool)arg4 setHasIndexed:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)indexSpecifiers:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)deleteSpecifiers:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (id)manifestFromSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 parentSpecifierNames:(id)arg6;
- (id)_keyValueDictionaryForURL:(id)arg1;
- (id)descriptionForCSSearchableItems:(id)arg1;
- (void)indexThirdPartyAppsWithPrefix:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
