/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

#import <Foundation/NSPredicate.h>

@interface NSPredicate (ABPredicateRunner)

- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (id)ab_metadataForMatchingRow:(struct CPSqliteStatement *)arg1 columnOffset:(unsigned long long)arg2;
- (void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (void)ab_runPredicateWithSortOrder:(unsigned int)arg1 ranked:(_Bool)arg2 inAddressBook:(void *)arg3 withDelegate:(id)arg4;
- (_Bool)ab_hasCallback;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg1 ranked:(_Bool)arg2 addressBook:(void *)arg3 propertyIndices:(const struct __CFDictionary **)arg4;
- (void)ab_addCallbackContextToArray:(id)arg1;
- (void)ab_bindSelectClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;

@end
