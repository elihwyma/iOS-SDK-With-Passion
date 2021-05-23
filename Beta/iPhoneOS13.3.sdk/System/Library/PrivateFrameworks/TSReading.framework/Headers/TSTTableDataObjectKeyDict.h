/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSTTableDataObjectKeyDict : NSObject

{
    struct unordered_map<SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int, TSTTableDataObjectHasher, TSTTableDataObjectEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int>>> *mMap;
}

- (id)init;
- (void)dealloc;
- (unsigned long long)count;
- (unsigned int)keyForObject:(id)arg1;
- (void)setKey:(unsigned int)arg1 forObject:(id)arg2;
- (void)removeKeyForObject:(id)arg1;
- (void)removeAllKeys;

@end
