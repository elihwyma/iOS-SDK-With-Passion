/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface TSTMergeRangeSortedSet : NSObject

{
    struct set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::__1::allocator<TSTMergeRangeElem>> *mSet;
    struct __tree_const_iterator<TSTMergeRangeElem, std::__1::__tree_node<TSTMergeRangeElem, void *>*, long> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__ptr_;
    } mIter;
    NSObject<OS_dispatch_semaphore> *mSem;
}

- (id)init;
- (void)dealloc;
- (unsigned long long)count;
- (void)reset;
- (id).cxx_construct;
- (CDStruct_5f1f7aa9)begin;
- (CDStruct_5f1f7aa9)iter;
- (void)addRange:(CDStruct_5f1f7aa9)arg1 andSize:(struct CGSize)arg2 andPaddingInsets:(struct UIEdgeInsets)arg3 andIsCheckbox:(_Bool)arg4;
- (struct CGSize)getSize;
- (_Bool)isCheckbox;
- (struct UIEdgeInsets)getPaddingInsets;

@end
