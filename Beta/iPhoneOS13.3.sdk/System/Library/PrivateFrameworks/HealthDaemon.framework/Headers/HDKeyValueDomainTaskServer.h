/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDStandardTaskServer.h>

@class HDKeyValueDomain;

@interface HDKeyValueDomainTaskServer : HDStandardTaskServer

{
    HDKeyValueDomain *_keyValueDomain;
}

+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;
+ (id)_entitlementForCategory:(long long)arg1;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_setNumber:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_setDate:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_setString:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_setData:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_setValuesWithDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_removeValuesForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_numberForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_dateForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_stringForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_dataForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_allValuesWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (Class)_keyValueEntityClass;
- (_Bool)_performDatabaseTransactionWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (void)_unitTest_overrideKeyValueDomainCategory:(long long)arg1;

@end
