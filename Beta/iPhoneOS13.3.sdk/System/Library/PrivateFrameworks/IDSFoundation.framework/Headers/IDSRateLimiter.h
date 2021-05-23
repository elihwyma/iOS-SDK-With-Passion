/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSMultiReadUniWriteLock, NSMutableDictionary;

@interface IDSRateLimiter : NSObject

{
    NSMutableDictionary *_cacheMap;
    NSMultiReadUniWriteLock *_readWriteLock;
    double _timeLimit;
    long long _limit;
}

@property (nonatomic) long long limit;
@property (nonatomic) double timeLimit;
@property (retain, nonatomic) NSMutableDictionary *cacheMap;
@property (retain, nonatomic) NSMultiReadUniWriteLock *readWriteLock;

- (id)description;
- (id)initWithLimit:(long long)arg1 timeLimit:(double)arg2;
- (void)noteItem:(id)arg1;
- (double)timeToUnderLimit:(id)arg1;
- (_Bool)underLimitForItem:(id)arg1;
- (void)cleanupExpiredItems;
- (id)_unlockedDescription;
- (void)clearItem:(id)arg1;

@end
