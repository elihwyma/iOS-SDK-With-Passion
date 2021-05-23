/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSTIntegerKeyDict : NSObject

{
    struct unordered_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject>>>> *mMap;
}

- (id)init;
- (void)dealloc;
- (long long)count;
- (void)removeAllObjects;
- (id)objectForKey:(unsigned int)arg1;
- (void)removeObjectForKey:(unsigned int)arg1;
- (id)allValues;
- (void)removeFirstObject;
- (void)setObject:(id)arg1 forKey:(unsigned int)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)transformWithFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2 andState:(void *)arg3;

@end
