/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, SAGuidanceGuideSnippet, SAGuidanceGuideUpdate, SAGuidanceSuggestedUtterances;

@protocol OS_dispatch_queue;

@interface AFUIGuideCacheManager : NSObject

{
    SAGuidanceGuideUpdate *_cachedGuideUpdate;
    NSObject<OS_dispatch_queue> *_cacheFileQueue;
    _Bool _isCheckingGuideUpdate;
}

@property (nonatomic, readonly) NSNumber *cachedGuideTag;
@property (nonatomic, readonly) SAGuidanceGuideSnippet *cachedGuideSnippet;
@property (nonatomic, readonly) SAGuidanceSuggestedUtterances *cachedSuggestedUtterances;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (_Bool)shouldCheckForUpdateWithLastAppUpdateTime:(id)arg1;
- (void)checkGuideUpdate;
- (id)_cachedGuideUpdate;
- (_Bool)_shouldCheckForUpdateAtDate:(id)arg1 lastAppUpdateTime:(id)arg2;
- (void)_updateLastCheckedWithDate:(id)arg1;
- (id)_pathForCachedGuideUpdate;
- (void)updateCacheWithGuideUpdate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateLastCheckedDate;
- (void)_checkGuideUpdateUsingAFClientLiteWithTag:(id)arg1;
- (id)_aceObjectDictionaryAtFilepath:(id)arg1;
- (void)_clearCachedGuide;

@end
