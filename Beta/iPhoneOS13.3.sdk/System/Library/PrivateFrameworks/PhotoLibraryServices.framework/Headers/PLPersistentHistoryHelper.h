/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLPersistentHistoryHelper : NSObject

+ (id)fetchTransactionsSinceToken:(id)arg1 withFetchLimit:(unsigned long long)arg2 context:(id)arg3 error:(id *)arg4;
+ (id)fetchTransactionsSinceToken:(id)arg1 withBatchSize:(unsigned long long)arg2 context:(id)arg3 error:(id *)arg4;
+ (id)fetchTransactionsSinceToken:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
+ (id)fetchTransactionCountSinceToken:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
+ (_Bool)deleteHistoryBeforeToken:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
+ (id)_executePersistentHistoryChangeRequest:(id)arg1 withContext:(id)arg2;

@end
