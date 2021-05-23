/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CUIThemeFacetCacheKey : NSObject

{
    struct _renditionkeytoken keyList[22];
    long long themeIndex;
    unsigned long long hashPrecalc;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash64;
- (id)initWithKeyList:(const struct _renditionkeytoken *)arg1 themeIndex:(long long)arg2;

@end
