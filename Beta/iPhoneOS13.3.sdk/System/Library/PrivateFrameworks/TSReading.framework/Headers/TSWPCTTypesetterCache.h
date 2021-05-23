/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSWPCTTypesetterCache : NSObject

{
    struct map<unsigned long, std::__1::shared_ptr<TSWPParagraphTypesetter>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<TSWPParagraphTypesetter>>>> _typesetters;
}

- (void)dealloc;
- (void)clearCache;
- (id).cxx_construct;
- (void)removeTypesetterForParagraphIndex:(unsigned long long)arg1;
- (void)p_limitCacheSize:(unsigned long long)arg1;
- (shared_ptr_b124cf66)cachedTypesetterForParagraphIdentifier:(unsigned long long)arg1;
- (void)addTypesetterForParagraphIdentifier:(unsigned long long)arg1 typesetter:(shared_ptr_b124cf66)arg2;

@end
