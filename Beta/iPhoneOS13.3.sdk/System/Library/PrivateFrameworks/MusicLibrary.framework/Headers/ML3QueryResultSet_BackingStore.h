/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ML3QueryResultSet_BackingStore : NSObject

{
    vector_bbba3654 _persistentIDs;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _sections;
}

@property (nonatomic, readonly) unsigned long long count;

- (id).cxx_construct;
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)persistentIDAtIndex:(unsigned long long)arg1;
- (void)reverseEnumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)containsPersistentIDs:(const unordered_set_da619913 *)arg1;
- (void)reverseEnumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (id)backingStoreByRemovingPersistentIDs:(const unordered_set_da619913 *)arg1;

@end
