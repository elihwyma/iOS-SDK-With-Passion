/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface _DECPredictionCache : NSObject

{
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (id)description;
- (void)cachePredictions:(id)arg1 consumer:(unsigned long long)arg2;
- (void)clearCacheForCategory:(unsigned long long)arg1 consumer:(unsigned long long)arg2;
- (id)predictionsForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2;

@end
