/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ACHCodableTemplate : PBCodable

{
    double _createdDate;
    long long _creatorDevice;
    long long _displayOrder;
    long long _duplicateRemovalCalendarUnit;
    long long _duplicateRemovalStrategy;
    long long _earnDateStrategy;
    long long _earnLimit;
    long long _minimumEngineVersion;
    long long _triggers;
    long long _version;
    NSString *_alertDates;
    NSString *_alertabilityPredicate;
    NSString *_availabilityEndDate;
    NSString *_availabilityPredicate;
    NSString *_availabilityStartDate;
    NSString *_availableCountryCodes;
    NSString *_availableSuffixes;
    NSString *_canonicalUnit;
    NSString *_goalExpression;
    NSString *_graceGoalExpression;
    NSString *_gracePredicate;
    NSString *_graceProgressExpression;
    NSString *_graceValueExpression;
    NSString *_graceVisibilityPredicate;
    NSString *_predicate;
    NSString *_progressExpression;
    NSString *_sourceName;
    NSString *_uniqueName;
    NSString *_valueExpression;
    NSString *_visibilityEndDate;
    NSString *_visibilityPredicate;
    NSString *_visibilityStartDate;
    _Bool _displaysEarnedInstanceCount;
    struct {
        unsigned int createdDate:1;
        unsigned int creatorDevice:1;
        unsigned int displayOrder:1;
        unsigned int duplicateRemovalCalendarUnit:1;
        unsigned int duplicateRemovalStrategy:1;
        unsigned int earnDateStrategy:1;
        unsigned int earnLimit:1;
        unsigned int minimumEngineVersion:1;
        unsigned int triggers:1;
        unsigned int version:1;
        unsigned int displaysEarnedInstanceCount:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasUniqueName;
@property (retain, nonatomic) NSString *uniqueName;
@property (nonatomic) _Bool hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) _Bool hasMinimumEngineVersion;
@property (nonatomic) long long minimumEngineVersion;
@property (nonatomic) _Bool hasCreatedDate;
@property (nonatomic) double createdDate;
@property (nonatomic) _Bool hasCreatorDevice;
@property (nonatomic) long long creatorDevice;
@property (nonatomic, readonly) _Bool hasSourceName;
@property (retain, nonatomic) NSString *sourceName;
@property (nonatomic, readonly) _Bool hasPredicate;
@property (retain, nonatomic) NSString *predicate;
@property (nonatomic) _Bool hasTriggers;
@property (nonatomic) long long triggers;
@property (nonatomic) _Bool hasEarnLimit;
@property (nonatomic) long long earnLimit;
@property (nonatomic, readonly) _Bool hasVisibilityPredicate;
@property (retain, nonatomic) NSString *visibilityPredicate;
@property (nonatomic, readonly) _Bool hasVisibilityStartDate;
@property (retain, nonatomic) NSString *visibilityStartDate;
@property (nonatomic, readonly) _Bool hasVisibilityEndDate;
@property (retain, nonatomic) NSString *visibilityEndDate;
@property (nonatomic, readonly) _Bool hasAvailabilityPredicate;
@property (retain, nonatomic) NSString *availabilityPredicate;
@property (nonatomic, readonly) _Bool hasAvailabilityStartDate;
@property (retain, nonatomic) NSString *availabilityStartDate;
@property (nonatomic, readonly) _Bool hasAvailabilityEndDate;
@property (retain, nonatomic) NSString *availabilityEndDate;
@property (nonatomic, readonly) _Bool hasAlertabilityPredicate;
@property (retain, nonatomic) NSString *alertabilityPredicate;
@property (nonatomic, readonly) _Bool hasAlertDates;
@property (retain, nonatomic) NSString *alertDates;
@property (nonatomic) _Bool hasDuplicateRemovalStrategy;
@property (nonatomic) long long duplicateRemovalStrategy;
@property (nonatomic) _Bool hasDuplicateRemovalCalendarUnit;
@property (nonatomic) long long duplicateRemovalCalendarUnit;
@property (nonatomic) _Bool hasEarnDateStrategy;
@property (nonatomic) long long earnDateStrategy;
@property (nonatomic, readonly) _Bool hasCanonicalUnit;
@property (retain, nonatomic) NSString *canonicalUnit;
@property (nonatomic, readonly) _Bool hasValueExpression;
@property (retain, nonatomic) NSString *valueExpression;
@property (nonatomic, readonly) _Bool hasProgressExpression;
@property (retain, nonatomic) NSString *progressExpression;
@property (nonatomic, readonly) _Bool hasGoalExpression;
@property (retain, nonatomic) NSString *goalExpression;
@property (nonatomic) _Bool hasDisplayOrder;
@property (nonatomic) long long displayOrder;
@property (nonatomic) _Bool hasDisplaysEarnedInstanceCount;
@property (nonatomic) _Bool displaysEarnedInstanceCount;
@property (nonatomic, readonly) _Bool hasAvailableCountryCodes;
@property (retain, nonatomic) NSString *availableCountryCodes;
@property (nonatomic, readonly) _Bool hasAvailableSuffixes;
@property (retain, nonatomic) NSString *availableSuffixes;
@property (nonatomic, readonly) _Bool hasGracePredicate;
@property (retain, nonatomic) NSString *gracePredicate;
@property (nonatomic, readonly) _Bool hasGraceVisibilityPredicate;
@property (retain, nonatomic) NSString *graceVisibilityPredicate;
@property (nonatomic, readonly) _Bool hasGraceValueExpression;
@property (retain, nonatomic) NSString *graceValueExpression;
@property (nonatomic, readonly) _Bool hasGraceProgressExpression;
@property (retain, nonatomic) NSString *graceProgressExpression;
@property (nonatomic, readonly) _Bool hasGraceGoalExpression;
@property (retain, nonatomic) NSString *graceGoalExpression;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
