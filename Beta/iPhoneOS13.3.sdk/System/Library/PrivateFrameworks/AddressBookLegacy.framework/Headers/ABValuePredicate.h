/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@class NSArray, NSObject;

@protocol NSObject;

@interface ABValuePredicate

{
    int _property;
    long long _comparison;
    id <NSObject> _value;
    NSArray *_orderedKeys;
    _Bool _dictionaryValue;
}

@property (nonatomic) int property;
@property (nonatomic) long long comparison;
@property (copy, nonatomic) NSObject *value;

+ (id)stringForComparison:(id)arg1 withComparision:(long long)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isValid;
- (id)predicateFormat;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (id)querySelectPropertiesForPredicateIdentifier:(int)arg1;
- (id)queryJoinsInCompound:(_Bool)arg1 predicateIdentifier:(int)arg2;
- (_Bool)_shouldConsultIndexForKey:(id)arg1;
- (_Bool)_supportsFTSSearch;
- (_Bool)_allowsLaxCheckingForFTS;
- (id)_ftsTermStringForString:(id)arg1;
- (id)_ftsTokenizedTermStringForString:(id)arg1;
- (id)stringForComparison:(id)arg1;
- (id)_ftsAllQueryStrings;

@end
