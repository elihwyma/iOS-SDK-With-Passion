/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSSQLiteDatabase;

@interface SSAppPurchaseHistoryTransaction : NSObject

{
    SSSQLiteDatabase *_database;
}

@property (nonatomic, readonly) SSSQLiteDatabase *database;

- (void)dealloc;
- (id)initWithDatabase:(id)arg1;

@end
