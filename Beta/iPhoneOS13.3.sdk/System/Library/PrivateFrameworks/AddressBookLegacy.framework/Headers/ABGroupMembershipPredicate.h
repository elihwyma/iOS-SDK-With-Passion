/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@class NSString;

@interface ABGroupMembershipPredicate

{
    void *_group;
    void *_store;
    NSString *_accountIdentifier;
}

@property (nonatomic) void *group;
@property (nonatomic) void *store;
@property (copy, nonatomic) NSString *accountIdentifier;

- (void)dealloc;
- (id)description;
- (_Bool)isValid;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;

@end
