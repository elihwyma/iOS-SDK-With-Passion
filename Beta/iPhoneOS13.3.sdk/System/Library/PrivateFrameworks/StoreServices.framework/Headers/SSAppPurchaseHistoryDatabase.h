/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSSQLiteDatabase;

@interface SSAppPurchaseHistoryDatabase : NSObject

{
    SSSQLiteDatabase *_database;
}

+ (void)_createDatabaseDirectory;
+ (_Bool)_setupDatabase:(id)arg1;
+ (id)accountUniqueIdentifierKey;
+ (id)newDefaultInstance;

- (id)init;
- (void)dealloc;
- (id)database;
- (id)valueForDatabaseProperty:(id)arg1;
- (_Bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (id)initWithDatabaseURL:(id)arg1 readOnly:(_Bool)arg2;
- (void)readUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (_Bool)removeValueForDatabaseProperty:(id)arg1;
- (void)modifyUsingAppPurchaseHistoryTransactionBlock:(CDUnknownBlockType)arg1;
- (void)readAsyncUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (id)currentAccountUniqueIdentifier;
- (_Bool)setCurrentAccountUniqueIdentifier:(id)arg1;
- (long long)localRevisionForAccountUniqueIdentifier:(id)arg1;
- (_Bool)setLocalRevision:(long long)arg1 forAccountUniqueIdentifier:(id)arg2;
- (_Bool)resetCacheForNewAccountID:(id)arg1;
- (id)allProperties:(id)arg1 accountID:(id)arg2 includingHidden:(_Bool)arg3;

@end
