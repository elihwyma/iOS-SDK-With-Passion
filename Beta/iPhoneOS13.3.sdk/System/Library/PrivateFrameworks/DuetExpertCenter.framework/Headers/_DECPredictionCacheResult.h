/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface _DECPredictionCacheResult : NSObject

{
    unsigned long long _hits;
    unsigned long long _misses;
    NSDictionary *_predictions;
}

@property (nonatomic, readonly) unsigned long long hits;
@property (nonatomic, readonly) unsigned long long misses;
@property (nonatomic, readonly) NSDictionary *predictions;

- (id)description;
- (id)initWithPredictions:(id)arg1 hits:(unsigned long long)arg2 misses:(unsigned long long)arg3;

@end
