/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, HKTaskServerProxyProvider, NSString, NSUUID;

@interface HKKeyValueDomain : NSObject

{
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    long long _category;
    NSString *_domainName;
    HKHealthStore *_healthStore;
}

@property (nonatomic, readonly) long long category;
@property (copy, nonatomic, readonly) NSString *domainName;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;
+ (id)healthAppDefaultsDomainWithHealthStore:(id)arg1;

- (void)invalidate;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)stringForKey:(id)arg1 error:(id *)arg2;
- (id)initWithCategory:(long long)arg1 domainName:(id)arg2 healthStore:(id)arg3;
- (void)setDate:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_actionCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_objectCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (id)_dataFromPropertyListValue:(id)arg1 error:(id *)arg2;
- (id)_propertyListValueFromData:(id)arg1 error:(id *)arg2;
- (_Bool)setNumber:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)setNumber:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)setDate:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)setString:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)setString:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)setPropertyListValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)setPropertyListValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setValuesWithDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeValuesForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)numberForKey:(id)arg1 error:(id *)arg2;
- (void)numberForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)dateForKey:(id)arg1 error:(id *)arg2;
- (void)dateForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stringForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)propertyListValueForKey:(id)arg1 error:(id *)arg2;
- (void)propertyListValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allValuesWithCompletion:(CDUnknownBlockType)arg1;

@end
