/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPContainedObject.h>

@interface TSTTileIDKeyDict : TSPContainedObject

{
    struct unordered_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject>>>> *mMap;
}

- (void)dealloc;
- (long long)count;
- (id)initWithOwner:(id)arg1;
- (void)removeAllTiles;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2;
- (id)tileForID:(CDStruct_d65e47c4)arg1;
- (void)setTile:(id)arg1 forID:(CDStruct_d65e47c4)arg2;
- (void)removeTileForID:(CDStruct_d65e47c4)arg1;
- (void)makeTilesPerformSelector:(SEL)arg1;

@end
