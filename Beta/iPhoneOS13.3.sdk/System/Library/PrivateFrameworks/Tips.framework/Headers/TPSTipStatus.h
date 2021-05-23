/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSString;

@interface TPSTipStatus : NSObject

{
    NSString *_lastDisplayContext;
    NSMutableArray *_hintDisplayedDates;
    NSMutableArray *_desiredOutcomePerformedDates;
    NSMutableArray *_hintNotDisplayedDueToFrequencyControlDates;
    _Bool _expired;
    _Bool _preconditionMatched;
    long long _hintIneligibleReason;
    unsigned long long _displayType;
    NSString *_identifier;
    NSString *_universalIdentifier;
    NSDate *_dateForTriggerRestartTracking;
    NSDate *_hintEligibleDate;
    NSDate *_hintWouldHaveBeenDisplayedDate;
    NSDate *_hintDismissalDate;
    NSDate *_contentViewedDate;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *universalIdentifier;
@property (copy, nonatomic) NSArray *hintDisplayedDates;
@property (copy, nonatomic) NSArray *desiredOutcomePerformedDates;
@property (copy, nonatomic) NSArray *hintNotDisplayedDueToFrequencyControlDates;
@property (nonatomic) long long hintIneligibleReason;
@property (nonatomic) unsigned long long displayType;
@property (nonatomic, getter=isExpired) _Bool expired;
@property (nonatomic, getter=isPreconditionMatched) _Bool preconditionMatched;
@property (copy, nonatomic) NSDate *dateForTriggerRestartTracking;
@property (copy, nonatomic) NSDate *hintEligibleDate;
@property (copy, nonatomic) NSDate *hintWouldHaveBeenDisplayedDate;
@property (copy, nonatomic) NSDate *hintDismissalDate;
@property (copy, nonatomic) NSDate *contentViewedDate;
@property (copy, nonatomic) NSString *lastDisplayContext;

+ (_Bool)supportsSecureCoding;
+ (id)classSet;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)removeHintEligibleDateStatus;
- (void)addHintDisplayedDate:(id)arg1;
- (void)addHintNotDisplayedDueToFrequencyControlDate:(id)arg1;
- (void)addDesiredOutcomePerformedDate:(id)arg1;
- (_Bool)isUserKnew;
- (_Bool)reenrollIfAllowed;

@end
