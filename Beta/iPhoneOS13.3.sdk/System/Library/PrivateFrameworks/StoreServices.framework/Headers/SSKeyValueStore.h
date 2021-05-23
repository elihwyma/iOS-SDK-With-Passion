/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSKeyValueStoreDatabase, SSXPCConnection;

@interface SSKeyValueStore : NSObject

{
    SSXPCConnection *_connection;
    SSKeyValueStoreDatabase *_database;
    _Bool _useLocalRead;
    _Bool _useLocalWrite;
}

@property (readonly, getter=isLocalReadable) _Bool localReadable;
@property (readonly, getter=isLocalWritable) _Bool localWritable;

+ (_Bool)isLocalReadable;

- (id)init;
- (void)dealloc;
- (void)getValueForDomain:(id)arg1 key:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)accountDictionaries;
- (id)iTunesValueForKey:(id)arg1 usedDomain:(id *)arg2;
- (void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeAccountFromDomain:(id)arg1;
- (void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3;
- (void)getValuesForDomain:(id)arg1 keys:(const id *)arg2 count:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)_loadDatabaseIfNecessary;
- (void)readUsingSessionBlock:(CDUnknownBlockType)arg1;
- (void)removeAllValuesForDomain:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)modifyUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeAllValuesForDomain:(id)arg1;
- (void)removeAllValuesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2;
- (void)removeAccountDictionaries;
- (id)copyAccounts;

@end
