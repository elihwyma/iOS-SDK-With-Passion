/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSNumber, SSSQLiteDatabase;

@interface SSWishlist : NSObject

{
    long long _accountIdentifier;
    SSSQLiteDatabase *_database;
}

@property (nonatomic, readonly) long long accountIdentifier;
@property (copy, nonatomic) NSNumber *lastSyncTime;

+ (_Bool)existsForAccountIdentifier:(long long)arg1;

- (void)dealloc;
- (id)initWithAccountIdentifier:(long long)arg1;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)deleteBackingStore;

@end
