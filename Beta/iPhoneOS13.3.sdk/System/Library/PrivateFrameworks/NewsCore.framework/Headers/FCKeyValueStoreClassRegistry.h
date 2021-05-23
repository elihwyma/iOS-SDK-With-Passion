/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@interface FCKeyValueStoreClassRegistry : NSObject

{
    struct unordered_map<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>, std::__1::hash<int>, std::__1::equal_to<NTPBKeyValuePair_ValueType>, std::__1::allocator<std::__1::pair<const NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>>> _registry;
}

- (id)init;
- (id).cxx_construct;
- (void)registerClass:(Class)arg1;
- (Class)classForValueType:(int)arg1;

@end
