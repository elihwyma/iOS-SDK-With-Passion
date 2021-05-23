/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSCache, NSMutableDictionary, NSString;

@protocol EDMailboxPredictor;

@interface EDCachingMailboxPredictor : NSObject

{
    id <EDMailboxPredictor> _predictor;
    NSCache *_cache;
    NSMutableDictionary *_cacheKeysByProperty;
}

@property (retain, nonatomic) id <EDMailboxPredictor> predictor;
@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSMutableDictionary *cacheKeysByProperty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_cacheKeyForMessages:(id)arg1;
- (id)predictMailboxIDsForMessages:(id)arg1 limit:(unsigned long long)arg2 diagnostics:(id *)arg3;
- (id)_propertyKeysForMessage:(id)arg1;
- (void)_trackCacheKey:(id)arg1 forPropertyKey:(id)arg2;
- (id)initWithPredictor:(id)arg1;
- (void)invalidatePredictionsAffectedByMessage:(id)arg1;
- (void)removeAllPredictions;

@end
