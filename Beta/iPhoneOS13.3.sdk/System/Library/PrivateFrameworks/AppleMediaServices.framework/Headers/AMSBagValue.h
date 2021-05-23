/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class ACAccount, NSString;

@protocol AMSBagDataSourceProtocol;

@interface AMSBagValue : NSObject

{
    ACAccount *_account;
    id <AMSBagDataSourceProtocol> _dataSource;
    NSString *_key;
    unsigned long long _valueType;
}

@property (copy, nonatomic) ACAccount *account;
@property (weak, nonatomic) id <AMSBagDataSourceProtocol> dataSource;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) unsigned long long valueType;
@property (nonatomic, readonly, getter=isLoaded) _Bool loaded;

+ (id)globalBagValueStorage;
+ (id)_valueFromDictionary:(id)arg1 forBagKey:(id)arg2;
+ (_Bool)_value:(id)arg1 isKindOfValueType:(unsigned long long)arg2;
+ (id)failingBagValueWithKey:(id)arg1 valueType:(unsigned long long)arg2 error:(id)arg3;
+ (id)frozenBagValueWithKey:(id)arg1 value:(id)arg2 valueType:(unsigned long long)arg3;

- (id)valueWithError:(id *)arg1;
- (void)valueWithCompletion:(CDUnknownBlockType)arg1;
- (id)valuePromise;
- (id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3;
- (id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3 account:(id)arg4;

@end
