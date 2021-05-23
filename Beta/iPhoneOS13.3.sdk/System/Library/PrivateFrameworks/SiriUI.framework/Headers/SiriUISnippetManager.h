/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

@class AFClientPluginManager, NSDictionary;

@protocol OS_dispatch_queue;

@interface SiriUISnippetManager : NSObject

{
    AFClientPluginManager *_pluginManager;
    NSDictionary *_snippetExtensionsCache;
    NSObject<OS_dispatch_queue> *_snippetExtensionsQueue;
}

+ (id)sharedInstance;

- (id)init;
- (id)snippetViewControllerForSnippet:(id)arg1;
- (void)_prewarmSnippetExtensionsCacheSynchronously;
- (id)_snippetExtensionsCache;
- (_Bool)_compareObject:(id)arg1 toObject:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_createDebugViewControllerForAceObject:(id)arg1;
- (id)filteredDisambiguationListItems:(id)arg1;
- (id)disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2;
- (_Bool)_listItem:(id)arg1 isEqualToListItem:(id)arg2;
- (_Bool)_listItem:(id)arg1 isPreferredOverListItem:(id)arg2;
- (void)preloadPluginBundles;
- (void)prewarmSnippetExtensionsCache;
- (id)extensionForSnippet:(id)arg1;
- (id)transcriptItemForObject:(id)arg1;
- (id)listItemToPickInAutodisambiguationForListItems:(id)arg1;
- (id)speakableProviderForObject:(id)arg1;

@end
