/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString, RERelevanceEnginePreferences;

@protocol OS_dispatch_queue;

@interface RERelevanceEnginePreferencesController : NSObject

{
    NSMapTable *_preferences;
    RERelevanceEnginePreferences *_effectivePreferences;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s _lock;
}

@property (nonatomic, readonly) RERelevanceEnginePreferences *effectivePreferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithQueue:(id)arg1;
- (void)setPreferences:(id)arg1 forObject:(id)arg2;
- (void)removePreferencesForObject:(id)arg1;
- (void)relevanceEnginePreferencesDidUpdate:(id)arg1;
- (void)_resetEffectivePreferences;

@end
