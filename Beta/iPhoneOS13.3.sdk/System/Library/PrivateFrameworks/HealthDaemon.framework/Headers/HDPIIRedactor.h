/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSDataDetector, NSRegularExpression, NSSet;

@interface HDPIIRedactor : NSObject <Swift>

{
    NSSet *_names;
    NSDataDetector *_dataDetectorAll;
    NSDataDetector *_dataDetectorSkipLink;
    NSDataDetector *_dataDetectorSkipPhoneNumbers;
    NSDataDetector *_dataDetectorSkipLinkSkipPhoneNumbers;
    NSRegularExpression *_fullWordRegex;
    NSRegularExpression *_SSNRegex;
    NSRegularExpression *_longNumberRegex;
}

@property (nonatomic, readonly) NSDataDetector *dataDetectorAll;
@property (nonatomic, readonly) NSDataDetector *dataDetectorSkipLink;
@property (nonatomic, readonly) NSDataDetector *dataDetectorSkipPhoneNumbers;
@property (nonatomic, readonly) NSDataDetector *dataDetectorSkipLinkSkipPhoneNumbers;
@property (nonatomic, readonly) NSRegularExpression *fullWordRegex;
@property (nonatomic, readonly) NSRegularExpression *SSNRegex;
@property (nonatomic, readonly) NSRegularExpression *longNumberRegex;
@property (nonatomic, readonly) NSSet *names;

+ (_Bool)supportsSecureCoding;
+ (id)_namesToRedactWithProfile:(id)arg1 error:(id *)arg2;
+ (id)_redactFullWordRegexWithError:(id *)arg1;
+ (id)_SSNRegularExpressionWithError:(id *)arg1;
+ (id)_longNumberRegexWithError:(id *)arg1;
+ (id)_meContactNameKeys;
+ (void)_addNamesFromMeContact:(id)arg1 toSet:(id)arg2;
+ (void)_addName:(id)arg1 toSet:(id)arg2;
+ (void)_addNames:(id)arg1 toSet:(id)arg2;
+ (id)redactorWithProfile:(id)arg1 error:(id *)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)redactedStringWithString:(id)arg1 options:(unsigned long long)arg2 redactedCount:(unsigned long long *)arg3;
- (unsigned long long)_redactDataDetectorTypesFromString:(id)arg1 options:(unsigned long long)arg2;
- (unsigned long long)_redactNamesFromString:(id)arg1;
- (unsigned long long)_redactSSNsFromString:(id)arg1;
- (unsigned long long)_redactLongNumbersFromString:(id)arg1;
- (id)redactedStringWithString:(id)arg1;
- (id)redactedStringWithString:(id)arg1 redactedCount:(unsigned long long *)arg2;
- (id)redactedStringWithString:(id)arg1 options:(unsigned long long)arg2;

@end
