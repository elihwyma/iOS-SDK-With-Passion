/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@class NSString;

@interface ABPhonePredicate

{
    NSString *_homeCountryCode;
    NSString *_phoneNumber;
    NSString *_country;
}

@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *country;

- (void)dealloc;
- (_Bool)isValid;
- (id)predicateFormat;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (id)queryJoinsInCompound:(_Bool)arg1 predicateIdentifier:(int)arg2;
- (_Bool)hasCallback;
- (void)evaluateCallbackWithSqliteContext:(struct sqlite3_context *)arg1 predicateContext:(id)arg2 values:(struct sqlite3_value **)arg3 count:(int)arg4;
- (id)homeCountryCode;

@end
