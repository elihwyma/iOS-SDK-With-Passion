/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSString, SSSQLiteDatabase;

@interface SSPurchasableItem : NSObject

{
    NSDictionary *_propertyValues;
    NSString *_tableName;
    SSSQLiteDatabase *_database;
}

+ (id)databaseTable;
+ (id)sortByDatePurchasedKey;
+ (id)allPropertyKeys;

- (void)dealloc;
- (id)description;
- (_Bool)isHidden;
- (long long)pid;
- (long long)storeID;
- (id)propertyValues;
- (long long)accountUniqueIdentifier;
- (id)initWithPropertyValues:(id)arg1;
- (id)datePurchased;

@end
