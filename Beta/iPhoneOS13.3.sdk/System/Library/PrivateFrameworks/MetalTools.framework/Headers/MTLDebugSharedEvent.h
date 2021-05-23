/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsSharedEvent.h>

@class NSMapTable;

@interface MTLDebugSharedEvent : MTLToolsSharedEvent

{
    struct mutex _resourceMapLock;
    struct unordered_map<unsigned long long, unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned long long>>> _valueToCountMap;
    NSMapTable *_valueToResourcesMap;
    _Bool _isStandardEvent;
}

@property (nonatomic) _Bool isStandardEvent;

+ (id)sharedListener;

- (void)dealloc;
- (id).cxx_construct;
- (void)setSignaledValue:(unsigned long long)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)releaseWritableResourcesForValue:(unsigned long long)arg1;
- (void)setWritableResources:(id)arg1 forValue:(unsigned long long)arg2;
- (void)retainWritableResourcesForValue:(unsigned long long)arg1;
- (void)_retainWritableResourcesForValue:(unsigned long long)arg1;
- (id)removeWritableResourcesForValue:(unsigned long long)arg1;

@end
