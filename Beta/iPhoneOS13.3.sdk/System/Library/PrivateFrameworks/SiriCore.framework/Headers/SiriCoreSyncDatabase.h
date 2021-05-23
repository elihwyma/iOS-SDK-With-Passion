/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@class NSString, SiriCoreSQLiteDatabase;

@interface SiriCoreSyncDatabase : NSObject

{
    NSString *_path;
    SiriCoreSQLiteDatabase *_db;
    _Bool _inTransaction;
    _Bool _debugMode;
}

@property (nonatomic) _Bool inTransaction;
@property (nonatomic) _Bool debugMode;

- (id)initWithPath:(id)arg1;
- (_Bool)openWithError:(id *)arg1;
- (_Bool)prepare;
- (_Bool)_executeStatement:(id)arg1 error:(id *)arg2;
- (_Bool)closeWithError:(id *)arg1;
- (_Bool)beginTransactionWithError:(id *)arg1;
- (_Bool)rollbackTransactionWithError:(id *)arg1;
- (_Bool)commitTransactionWithError:(id *)arg1;
- (_Bool)_insertSyncRec:(id)arg1 intoTable:(id)arg2 error:(id *)arg3;
- (int)_countKey:(id)arg1 fromTable:(id)arg2 updatedAfter:(id)arg3 error:(id *)arg4;
- (_Bool)_enumerateKey:(id)arg1 updatedAfter:(id)arg2 fromTable:(id)arg3 usingBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (_Bool)succeedOrRollbackOnFail:(id)arg1 error:(id *)arg2 whileExecuting:(CDUnknownBlockType)arg3;
- (_Bool)donate:(id)arg1 error:(id *)arg2;
- (_Bool)remove:(id)arg1 error:(id *)arg2;
- (_Bool)removeAllItemsOfKey:(id)arg1 error:(id *)arg2;
- (_Bool)markAsSent:(id)arg1 error:(id *)arg2;
- (int)countRemovalsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id *)arg3;
- (int)countItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id *)arg3;
- (int)countSentItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id *)arg3;
- (_Bool)enumerateItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)enumerateRemovalsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)enumerateSentItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;

@end
