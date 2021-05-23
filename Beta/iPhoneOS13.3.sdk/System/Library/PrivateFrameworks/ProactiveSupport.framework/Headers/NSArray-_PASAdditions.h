/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSArray.h>

@interface NSArray (_PASAdditions)

- (id)_pas_mappedArrayWithIndexedTransform:(CDUnknownBlockType)arg1;
- (id)_pas_filteredArrayWithIndexedTest:(CDUnknownBlockType)arg1;
- (id)_pas_leftFoldWithInitialObject:(id)arg1 indexedAccumulate:(CDUnknownBlockType)arg2;
- (id)_pas_rightFoldWithInitialObject:(id)arg1 indexedAccumulate:(CDUnknownBlockType)arg2;
- (id)_pas_mappedArrayWithTransform:(CDUnknownBlockType)arg1;
- (id)_pas_filteredArrayWithTest:(CDUnknownBlockType)arg1;
- (id)_pas_leftFoldWithInitialObject:(id)arg1 accumulate:(CDUnknownBlockType)arg2;
- (id)_pas_rightFoldWithInitialObject:(id)arg1 accumulate:(CDUnknownBlockType)arg2;
- (id)_pas_shuffledArrayUsingRng:(id)arg1;
- (void)_pas_enumerateChunksOfSize:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
