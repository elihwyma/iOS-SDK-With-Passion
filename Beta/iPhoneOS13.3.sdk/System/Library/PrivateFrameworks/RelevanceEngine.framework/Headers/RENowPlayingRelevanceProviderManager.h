/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProviderManager.h>

@interface RENowPlayingRelevanceProviderManager : RERelevanceProviderManager

{
    unsigned long long _state;
}

@property (nonatomic, readonly) unsigned long long state;

+ (id)_features;
+ (Class)_relevanceProviderClass;

- (void)pause;
- (void)resume;
- (id)initWithQueue:(id)arg1;
- (void)_updatePlaybackState;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;

@end
