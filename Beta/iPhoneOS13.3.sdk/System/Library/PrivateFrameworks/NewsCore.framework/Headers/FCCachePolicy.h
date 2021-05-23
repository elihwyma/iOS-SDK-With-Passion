/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@interface FCCachePolicy : NSObject <Swift>

{
    unsigned long long _cachePolicy;
    double _maximumCachedAge;
}

@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) double maximumCachedAge;

+ (id)defaultCachePolicy;
+ (id)ignoreCacheCachePolicy;
+ (id)cachePolicyWithSoftMaxAge:(double)arg1;
+ (id)cachedOnlyCachePolicy;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
