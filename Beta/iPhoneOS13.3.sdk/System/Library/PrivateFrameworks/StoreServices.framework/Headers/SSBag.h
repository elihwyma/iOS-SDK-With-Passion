/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDate, NSString, SSBagProfileConfig;

@interface SSBag : NSObject

{
    NSString *_profile;
    NSString *_profileVersion;
}

@property (retain, nonatomic) NSString *profile;
@property (retain, nonatomic) NSString *profileVersion;
@property (nonatomic, readonly, getter=isExpired) _Bool expired;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) SSBagProfileConfig *profileConfig;

+ (id)cache;
+ (unsigned long long)_AMSBagValueTypeFromSSBagValueType:(unsigned long long)arg1;
+ (id)bagWithProfileConfig:(id)arg1;
+ (void)removeAllDebugBackingDictionaries;
+ (void)setDebugBackingDictionary:(id)arg1 forProfileConfig:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)resetCaches;
- (id)arrayForKey:(id)arg1 error:(id *)arg2;
- (id)boolForKey:(id)arg1 error:(id *)arg2;
- (id)doubleForKey:(id)arg1 error:(id *)arg2;
- (id)integerForKey:(id)arg1 error:(id *)arg2;
- (id)stringForKey:(id)arg1 error:(id *)arg2;
- (id)URLForKey:(id)arg1 error:(id *)arg2;
- (id)dictionaryForKey:(id)arg1 error:(id *)arg2;
- (id)_initWithProfile:(id)arg1 profileVersion:(id)arg2;
- (void)_bagChanged:(id)arg1;
- (id)_AMSBag;
- (void)arrayForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)boolForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dictionaryForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)doubleForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)integerForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)stringForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)URLForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)arrayPromiseForKey:(id)arg1;
- (id)boolPromiseForKey:(id)arg1;
- (id)dictionaryPromiseForKey:(id)arg1;
- (id)doublePromiseForKey:(id)arg1;
- (id)integerPromiseForKey:(id)arg1;
- (id)stringPromiseForKey:(id)arg1;
- (id)URLPromiseForKey:(id)arg1;
- (_Bool)URLIsTrusted:(id)arg1;
- (_Bool)canHandleTrustedDomains;

@end
