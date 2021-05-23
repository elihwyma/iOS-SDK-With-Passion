/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSString;

@interface HDKeyValueDomain : NSObject

{
    HDProfile *_profile;
    Class _entityClass;
    long long _category;
    NSString *_domainName;
}

@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) NSString *domainName;

+ (id)healthAppUserDefaultsDomainWithProfile:(id)arg1;

- (id)stringForKey:(id)arg1 error:(id *)arg2;
- (_Bool)setNumber:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)setDate:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)setString:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)setPropertyListValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)numberForKey:(id)arg1 error:(id *)arg2;
- (id)dateForKey:(id)arg1 error:(id *)arg2;
- (id)propertyListValueForKey:(id)arg1 error:(id *)arg2;
- (id)dataForKey:(id)arg1 error:(id *)arg2;
- (_Bool)removeValuesForKeys:(id)arg1 error:(id *)arg2;
- (id)initWithCategory:(long long)arg1 domainName:(id)arg2 profile:(id)arg3;
- (id)allValuesWithError:(id *)arg1;
- (_Bool)setData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)setValuesWithDictionary:(id)arg1 error:(id *)arg2;
- (id)quantityForKey:(id)arg1 unit:(id)arg2 error:(id *)arg3;
- (id)valuesForKeys:(id)arg1 error:(id *)arg2;
- (id)modificationDatesForKeys:(id)arg1 error:(id *)arg2;
- (_Bool)setQuantity:(id)arg1 unit:(id)arg2 forKey:(id)arg3 error:(id *)arg4;

@end
