/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REPredictor.h>

@class NSDictionary, NSMutableDictionary, PPNamedEntityStore;

@interface REPortraitPredictor : REPredictor

{
    PPNamedEntityStore *_namedEntityStore;
    NSMutableDictionary *_namedEntityScores;
}

@property (nonatomic, readonly) NSDictionary *namedEntityScores;

+ (double)updateInterval;

- (void)dealloc;
- (id)_init;
- (void)update;
- (float)userAffinityToContent:(id)arg1;
- (void)_loadStoreIfNeeded;

@end
