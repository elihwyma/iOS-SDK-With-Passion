/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

#import <Foundation/NSObject.h>

@class HKUnit, NSArray, NSDate, NSDateComponents, NSSet, NSString;

@interface ACHTemplate : NSObject

{
    CDStruct_1bc457c2 _packedVisibilityStart;
    CDStruct_1bc457c2 _packedVisibilityEnd;
    CDStruct_1bc457c2 _packedAvailabilityStart;
    CDStruct_1bc457c2 _packedAvailabilityEnd;
    unsigned char _minimumEngineVersion;
    unsigned char _creatorDevice;
    unsigned char _earnLimit;
    unsigned char _duplicateRemovalStrategy;
    unsigned char _earnDateStrategy;
    _Bool _displaysEarnedInstanceCount;
    unsigned long long _key;
    NSString *_uniqueName;
    unsigned long long _version;
    NSDate *_createdDate;
    NSString *_sourceName;
    NSString *_predicate;
    NSString *_gracePredicate;
    NSString *_valueExpression;
    NSString *_graceValueExpression;
    NSString *_progressExpression;
    NSString *_graceProgressExpression;
    NSString *_goalExpression;
    NSString *_graceGoalExpression;
    unsigned long long _triggers;
    NSString *_visibilityPredicate;
    NSString *_graceVisibilityPredicate;
    NSString *_availabilityPredicate;
    NSArray *_availableCountryCodes;
    NSString *_alertabilityPredicate;
    NSSet *_alertDates;
    unsigned long long _duplicateRemovalCalendarUnit;
    HKUnit *_canonicalUnit;
    unsigned long long _displayOrder;
    NSArray *_availableSuffixes;
}

@property (nonatomic) unsigned long long key;
@property (retain, nonatomic) NSString *uniqueName;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned char minimumEngineVersion;
@property (retain, nonatomic) NSDate *createdDate;
@property (nonatomic) unsigned char creatorDevice;
@property (retain, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSString *predicate;
@property (retain, nonatomic) NSString *gracePredicate;
@property (retain, nonatomic) NSString *valueExpression;
@property (retain, nonatomic) NSString *graceValueExpression;
@property (retain, nonatomic) NSString *progressExpression;
@property (retain, nonatomic) NSString *graceProgressExpression;
@property (retain, nonatomic) NSString *goalExpression;
@property (retain, nonatomic) NSString *graceGoalExpression;
@property (nonatomic) unsigned long long triggers;
@property (nonatomic) unsigned char earnLimit;
@property (retain, nonatomic) NSString *visibilityPredicate;
@property (retain, nonatomic) NSString *graceVisibilityPredicate;
@property (retain, nonatomic) NSDateComponents *visibilityStart;
@property (retain, nonatomic) NSDateComponents *visibilityEnd;
@property (retain, nonatomic) NSString *availabilityPredicate;
@property (retain, nonatomic) NSDateComponents *availabilityStart;
@property (retain, nonatomic) NSDateComponents *availabilityEnd;
@property (retain, nonatomic) NSArray *availableCountryCodes;
@property (retain, nonatomic) NSString *alertabilityPredicate;
@property (retain, nonatomic) NSSet *alertDates;
@property (nonatomic) unsigned char duplicateRemovalStrategy;
@property (nonatomic) unsigned long long duplicateRemovalCalendarUnit;
@property (nonatomic) unsigned char earnDateStrategy;
@property (retain, nonatomic) HKUnit *canonicalUnit;
@property (nonatomic) unsigned long long displayOrder;
@property (nonatomic) _Bool displaysEarnedInstanceCount;
@property (retain, nonatomic) NSArray *availableSuffixes;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodable:(id)arg1;
- (id)_displayStringForStringValues:(id)arg1;
- (id)_displayStringForAlertDates:(id)arg1;

@end
