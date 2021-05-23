/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

#import <Foundation/NSCompoundPredicate.h>

@interface NSCompoundPredicate (ABPredicateQueryCreation)

- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (_Bool)ab_hasCallback;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg1 ranked:(_Bool)arg2 addressBook:(void *)arg3 propertyIndices:(const struct __CFDictionary **)arg4;
- (void)ab_addCallbackContextToArray:(id)arg1;
- (void)ab_bindSelectClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;

@end
