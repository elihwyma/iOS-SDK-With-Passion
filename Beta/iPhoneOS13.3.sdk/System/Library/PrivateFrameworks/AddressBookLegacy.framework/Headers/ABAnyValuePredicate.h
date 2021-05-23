/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABAnyValuePredicate

{
    int _property;
}

@property (nonatomic) int property;

- (id)init;
- (_Bool)isValid;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (id)queryJoinsInCompound:(_Bool)arg1 predicateIdentifier:(int)arg2;
- (id)queryGroupByProperties;

@end
