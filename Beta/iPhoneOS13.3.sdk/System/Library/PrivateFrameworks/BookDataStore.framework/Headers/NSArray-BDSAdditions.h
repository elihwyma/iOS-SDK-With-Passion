/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSArray.h>

@interface NSArray (BDSAdditions)

- (void)bds_traverseBatchesOfSize:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)bds_arrayByRemovingNSNullsInvokingBlockForNulls:(CDUnknownBlockType)arg1;
- (id)bds_dictionaryUsingPropertyAsKey:(id)arg1;
- (id)bds_arrayByRemovingNSNulls;
- (void)bds_chainSuccessAndErrorCompletionSelectorCallsForSelector:(SEL)arg1 completion:(CDUnknownBlockType)arg2;

@end
