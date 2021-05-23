/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSSQLiteDatabase;

@interface SSKeyValueStoreSession : NSObject

{
    SSSQLiteDatabase *_database;
}

@property (nonatomic, readonly) SSSQLiteDatabase *database;

- (void)dealloc;
- (id)initWithDatabase:(id)arg1;
- (id)iTunesValueForKey:(id)arg1 usedDomain:(id *)arg2;
- (id)copyValueForDomain:(id)arg1 key:(id)arg2;
- (id)copyAccountDictionaryForDomain:(id)arg1;
- (id)copyDataForDomain:(id)arg1 key:(id)arg2;
- (id)existingEntityForDomain:(id)arg1 key:(id)arg2;

@end
