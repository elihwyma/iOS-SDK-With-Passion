/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface INIntentSummaryCache : NSObject

{
    int _systemLanguageChangeNotificationToken;
    NSObject<OS_dispatch_queue> *_resourceAccessQueue;
    struct NSMutableDictionary *_allBundlesCache;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resourceAccessQueue;
@property (nonatomic, readonly) NSMutableDictionary *allBundlesCache;
@property (nonatomic, readonly) int systemLanguageChangeNotificationToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedCache;

- (id)init;
- (void)dealloc;
- (void)applicationsDidInstall:(id)arg1;
- (void)invalidateCache;
- (struct NSCache *)bundleCacheForBundleId:(id)arg1;
- (void)setBundleCache:(struct NSCache *)arg1 forBundleId:(id)arg2;
- (id)cachedSummaryForIntent:(id)arg1 languageCode:(id)arg2 creatingIfNeeded:(_Bool)arg3;
- (_Bool)getTitle:(id *)arg1 forIntent:(id)arg2 languageCode:(id)arg3;
- (_Bool)getSubtitle:(id *)arg1 forIntent:(id)arg2 languageCode:(id)arg3;
- (void)setTitle:(id)arg1 forIntent:(id)arg2 languageCode:(id)arg3;
- (void)setSubtitle:(id)arg1 forIntent:(id)arg2 languageCode:(id)arg3;
- (void)startAutomaticInvalidation;
- (void)stopAutomaticInvalidation;
- (void)startObservingApplicationWorkspaceChanges;
- (void)stopObservingApplicationWorkspaceChanges;
- (void)startObservingSystemLanguageChanges;
- (void)stopObservingSystemLanguageChanges;
- (void)invalidateCacheForBundleId:(id)arg1;

@end
