/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSSQLiteDatabase;

@interface SSKeyValueStoreDatabase : NSObject

{
    SSSQLiteDatabase *_database;
}

- (id)init;
- (void)dealloc;
- (void)readUsingSessionBlock:(CDUnknownBlockType)arg1;
- (void)modifyUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (void)modifyAsyncUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (id)initReadOnly;
- (id)_initReadOnly:(_Bool)arg1;
- (void)_dispatchBlockAsync:(CDUnknownBlockType)arg1;
- (void)readAsyncUsingSessionBlock:(CDUnknownBlockType)arg1;

@end
