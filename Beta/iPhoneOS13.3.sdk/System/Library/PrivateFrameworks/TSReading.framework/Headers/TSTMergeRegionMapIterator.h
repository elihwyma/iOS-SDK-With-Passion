/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSTMergeRegionMap;

@interface TSTMergeRegionMapIterator : NSObject

{
    TSTMergeRegionMap *mMergeRegionMap;
    struct __hash_map_iterator<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *>*>> {
        struct __hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *>*> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *>*> *__node_;
        } __i_;
    } mMergeRegionIterator;
}

- (void)dealloc;
- (void)reset;
- (id).cxx_construct;
- (CDStruct_5f1f7aa9)nextMergeRegion;
- (id)initWithMergeRegionMap:(id)arg1;
- (_Bool)hasNextMergeRegion;

@end
