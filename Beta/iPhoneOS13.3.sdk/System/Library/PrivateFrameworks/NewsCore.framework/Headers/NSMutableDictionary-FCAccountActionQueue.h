/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (FCAccountActionQueue)

- (void)fc_setLocalDataHintIfNeeded:(_Bool)arg1;
- (_Bool)fc_enqueueActionType:(long long)arg1;
- (void)fc_popActionTypesUpToCount:(unsigned long long)arg1;
- (void)fc_safelySetObjectAllowingNil:(id)arg1 forKey:(id)arg2;
- (void)fc_safelySetObject:(id)arg1 forKey:(id)arg2;
- (void)fc_safelySetObjectAllowingNil:(id)arg1 forKeyAllowingNil:(id)arg2;
- (void)fc_removeObjectsForKeysNotInSet:(id)arg1;
- (void)fc_enqueueTransaction:(id)arg1 withMaxTransactionCount:(unsigned long long)arg2;
- (id)fc_dequeueTransactions;
- (void)fc_transformValuesWithKeyAndValueBlock:(CDUnknownBlockType)arg1;
- (void)fc_removeObjectsForKeysNotInArray:(id)arg1;
- (void)fc_removeObjectsForKeysPassingTest:(CDUnknownBlockType)arg1;
- (void)fc_mergeWithDictionary:(id)arg1 withValueCombiner:(CDUnknownBlockType)arg2;

@end
