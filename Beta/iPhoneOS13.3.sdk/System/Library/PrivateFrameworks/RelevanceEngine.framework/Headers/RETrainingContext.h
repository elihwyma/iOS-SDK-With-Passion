/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class REConcurrentDictionary, RERelevanceEngine, RERemoteTrainingContext;

@interface RETrainingContext : NSObject

{
    RERelevanceEngine *_relevanceEngine;
    REConcurrentDictionary *_attributes;
    RERemoteTrainingContext *_remoteContext;
    RETrainingContext *_cachedAttributeContext;
}

@property (nonatomic, readonly) RETrainingContext *attributeContext;
@property (nonatomic, readonly) _Bool _wantsAutomaticRemoteContextForwarding;
@property (retain, nonatomic) RERemoteTrainingContext *remoteContext;
@property (retain) RETrainingContext *cachedAttributeContext;
@property (nonatomic, readonly) RERelevanceEngine *relevanceEngine;
@property (nonatomic, readonly) _Bool isCurrent;

- (id)init;
- (void)dealloc;
- (void)becomeCurrent;
- (id)attributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)_configureForRelevanceEngine:(id)arg1;
- (void)flushTraining;
- (void)_willResignCurrent;
- (void)_willBecomeCurrent;
- (void)_didResignCurrent;
- (void)_didBecomeCurrent;
- (void)_trainElementWithIdentifier:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3;
- (void)_trainElement:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3;
- (void)trainWithElement:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3;
- (void)trainWithUnmanagedElement:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3;
- (_Bool)performSimulationCommand:(id)arg1 withOptions:(id)arg2;

@end
