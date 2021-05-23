/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface AMSBagKeySet : NSObject

{
    NSSet *_keys;
}

@property (nonatomic, readonly) NSSet *keys;
@property (nonatomic, readonly) unsigned long long count;

+ (void)registerBagKeySet:(id)arg1 forProfile:(id)arg2 profileVersion:(id)arg3;
+ (id)registeredBagKeySetForProfile:(id)arg1 profileVersion:(id)arg2;
+ (id)bagKeySetCacheAccessQueue;
+ (id)bagKeySetCache;
+ (void)resetRegisteredBagKeySets;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)hasKey:(id)arg1;
- (id)bagKeyInfoForKey:(id)arg1;

@end
