/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSSQLiteDatabase;

@interface SSEventsTableBase : NSObject

{
    SSSQLiteDatabase *_database;
}

+ (id)databasePath;

- (id)init;
- (id)initWithDatabase:(id)arg1;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_setupDatabase;

@end
