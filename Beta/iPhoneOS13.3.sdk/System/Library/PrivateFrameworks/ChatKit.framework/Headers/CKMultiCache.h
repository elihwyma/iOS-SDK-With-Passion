/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <IMCore/IMMultiDict.h>

@interface CKMultiCache : IMMultiDict

{
    _Bool _cacheEligibleForPrewarm;
    _Bool _punchoutCacheEligibleForPrewarm;
    unsigned long long _limit;
}

@property (nonatomic) unsigned long long limit;
@property (nonatomic) _Bool cacheEligibleForPrewarm;
@property (nonatomic) _Bool punchoutCacheEligibleForPrewarm;

- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (void)pushObject:(id)arg1 forKey:(id)arg2;
- (void)markCacheAsPrewarmed;
- (void)markPunchoutCacheAsPrewarmed;

@end
