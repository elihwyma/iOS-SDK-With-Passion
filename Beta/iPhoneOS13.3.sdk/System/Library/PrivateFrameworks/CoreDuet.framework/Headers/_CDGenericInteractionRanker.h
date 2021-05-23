/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSSet, NSString;

@interface _CDGenericInteractionRanker : NSObject

{
    _Bool _requireAllSeedContacts;
    NSDate *_referenceDate;
    NSArray *_seedContacts;
    NSString *_referenceLocationUUID;
    NSSet *_referenceKeywords;
    NSSet *_allowedIdentifiers;
    NSSet *_allowedPersonIds;
    NSSet *_allowedPersonIdType;
    NSString *_contactPrefix;
    double _timeHalfLife;
    double _timeOfDayHalfLife;
    double _timeOfWeekHalfLife;
    double _timeWeight;
    double _timeOfDayWeight;
    double _timeOfWeekWeight;
    double _c;
    double _sameWeekPeriodWeight;
    double _diffWeekPeriodWeight;
    double _outgoingWeight;
    double _socialWeight;
    double _locationWeight;
    double _keywordWeight;
    double _contactNameKeywordMatchWeight;
    unsigned long long _rankAggregationMethod;
}

@property (retain) NSDate *referenceDate;
@property (retain) NSArray *seedContacts;
@property (retain) NSString *referenceLocationUUID;
@property (retain) NSSet *referenceKeywords;
@property (retain) NSSet *allowedIdentifiers;
@property (retain) NSSet *allowedPersonIds;
@property (retain) NSSet *allowedPersonIdType;
@property (retain) NSString *contactPrefix;
@property double timeHalfLife;
@property double timeOfDayHalfLife;
@property double timeOfWeekHalfLife;
@property double timeWeight;
@property double timeOfDayWeight;
@property double timeOfWeekWeight;
@property double c;
@property double sameWeekPeriodWeight;
@property double diffWeekPeriodWeight;
@property double outgoingWeight;
@property double socialWeight;
@property _Bool requireAllSeedContacts;
@property double locationWeight;
@property double keywordWeight;
@property double contactNameKeywordMatchWeight;
@property (nonatomic) unsigned long long rankAggregationMethod;

+ (_Bool)isDateInWeekend:(id)arg1;

- (id)init;
- (id)rankInteraction:(id)arg1;
- (_Bool)contactIsAllowed:(id)arg1;
- (_Bool)canRankContacts;
- (double)rankContact:(id)arg1;

@end
