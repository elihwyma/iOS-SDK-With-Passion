/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSNumber;

@interface MCPasswordPolicyPayload : MCPayload

{
    NSNumber *_isSimplePasscodeAllowed;
    NSNumber *_isPasscodeRequired;
    NSNumber *_isAlphanumericPasscodeRequired;
    NSNumber *_isManualFetchingWhenRoaming;
    NSNumber *_minLength;
    NSNumber *_maxFailedAttempts;
    NSNumber *_maxGracePeriodMinutes;
    NSNumber *_maxInactivityMinutes;
    NSNumber *_maxPasscodeAgeDays;
    NSNumber *_passcodeHistoryCount;
    NSNumber *_minComplexCharacters;
}

@property (retain, nonatomic, readonly) NSNumber *isSimplePasscodeAllowed;
@property (retain, nonatomic, readonly) NSNumber *isPasscodeRequired;
@property (retain, nonatomic, readonly) NSNumber *isAlphanumericPasscodeRequired;
@property (retain, nonatomic, readonly) NSNumber *isManualFetchingWhenRoaming;
@property (retain, nonatomic, readonly) NSNumber *minLength;
@property (retain, nonatomic, readonly) NSNumber *maxFailedAttempts;
@property (retain, nonatomic, readonly) NSNumber *maxGracePeriodMinutes;
@property (retain, nonatomic, readonly) NSNumber *maxInactivityMinutes;
@property (retain, nonatomic, readonly) NSNumber *maxPasscodeAgeDays;
@property (retain, nonatomic, readonly) NSNumber *passcodeHistoryCount;
@property (retain, nonatomic, readonly) NSNumber *minComplexCharacters;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)title;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Description;
- (id)restrictions;
- (id)filterForUserEnrollmentOutError:(id *)arg1;

@end
