/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSWPFontHeightCache : NSObject

{
    struct list<unsigned long, std::__1::allocator<unsigned long>> _fontHashList;
    struct map<unsigned long, TSWPFontHeightCacheEntry, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, TSWPFontHeightCacheEntry>>> _fontHashToInfoMap;
    unsigned int _cacheSize;
    unsigned int _maxCacheSize;
    struct _opaque_pthread_rwlock_t _lock;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedCache;
+ (id)_singletonAlloc;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (_Bool)p_findEntryForFont:(struct __CTFont *)arg1 outHeightInfo:(CDStruct_7660b417 *)arg2 collision:(_Bool *)arg3;
- (void)p_addEntryForFont:(struct __CTFont *)arg1 heightInfo:(const CDStruct_7660b417 *)arg2;
- (CDStruct_7660b417)fontHeightInfoForFont:(struct __CTFont *)arg1;

@end
