/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet, WKUserContentController;

@protocol OS_dispatch_queue;

@interface SFContentBlockerManager : NSObject

{
    id _extensionMatchingContext;
    WKUserContentController *_userContentController;
    NSSet *_extensions;
    NSMutableSet *_observers;
    _Bool _lastExtensionDiscoveryHadError;
    NSMutableDictionary *_extensionsRecompiledAfterBackup;
    NSObject<OS_dispatch_queue> *_recompilationInformationAccessQueue;
}

@property (nonatomic, readonly) NSSet *extensions;
@property (nonatomic, readonly) WKUserContentController *userContentController;

+ (id)sharedManager;
+ (id)_contentBlockerLoaderConnection;
+ (void)reloadContentBlockerWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)getStateOfContentBlockerWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)contentBlockerStore;
+ (void)_createContentExtensionsDirectoryWithURL:(id)arg1;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_loadContentBlockerWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_beginContentBlockerDiscovery;
- (id)_findNewExtensionsAdded:(id)arg1 toExistingExtensions:(id)arg2;
- (void)_recompileEnabledContentBlockersIfNeeded:(id)arg1;
- (void)_saveContentBlockerRecompilationInformation;
- (void)_loadContentBlockerRecompilationInformationIfNeeded;
- (_Bool)_hasRecompilationBeenAttemptedForExtension:(id)arg1;
- (_Bool)extensionIsEnabled:(id)arg1;
- (void)_noteRecompilationWasAttemptedForExtension:(id)arg1;
- (void)reloadUserContentController;
- (void)setExtension:(id)arg1 isEnabled:(_Bool)arg2;
- (id)displayNameForExtension:(id)arg1;

@end
