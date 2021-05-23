/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface CNTracedLog : NSObject

{
    NSString *_message;
    NSString *_domain;
    NSString *_domainVersion;
    NSString *_domainScope;
    NSString *_signature;
    NSString *_signature2;
    NSString *_signature3;
    NSString *_value;
    NSString *_value2;
    NSString *_value3;
    NSString *_uuid;
    _Bool _summarize;
    long long _result;
    NSDictionary *_customProperties;
}

@property (copy, readonly) NSString *message;
@property (copy, readonly) NSString *domain;
@property (copy) NSString *domainVersion;
@property (copy) NSString *domainScope;
@property (copy) NSString *signature;
@property (copy) NSString *signature2;
@property (copy) NSString *signature3;
@property (copy) NSString *value;
@property (copy) NSString *value2;
@property (copy) NSString *value3;
@property (copy) NSString *uuid;
@property _Bool summarize;
@property long long result;
@property (copy) NSDictionary *customProperties;

+ (long long)roundNumber:(long long)arg1 usingSignificantDigits:(unsigned long long)arg2;
+ (id)logWithDomain:(id)arg1;
+ (id)formatIntegerByRoundingForPrivacy:(long long)arg1;
+ (id)formatTimeIntervalByRoundingForPrivacy:(double)arg1;
+ (_Bool)shouldLogGivenSamplePercentage:(float)arg1;

- (id)init;
- (id)initWithDomain:(id)arg1 message:(id)arg2;
- (void)enumerateStandardKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCustomKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;
- (void)sendValue:(id)arg1 forKey:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)sendTrace;
- (void)enumerateStandardizedKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;
- (id)resultString;

@end
