/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDMessageQueryTransformer, EDSearchableIndex, EFSQLObjectPropertyMapper, EFSearchableIndexObjectPropertyMapper;

@interface EDMessageQueryParser : NSObject

{
    EDSearchableIndex *_searchableIndex;
    EFSQLObjectPropertyMapper *_sqlPropertyMapper;
    EFSearchableIndexObjectPropertyMapper *_searchableIndexMapper;
    EDMessageQueryTransformer *_transformer;
}

@property (nonatomic, readonly) EDMessageQueryTransformer *transformer;
@property (nonatomic, readonly) EDSearchableIndex *searchableIndex;
@property (nonatomic, readonly) EFSQLObjectPropertyMapper *sqlPropertyMapper;
@property (nonatomic, readonly) EFSearchableIndexObjectPropertyMapper *searchableIndexMapper;

+ (id)performSearchableIndexQueryPredicate:(id)arg1 propertyMapper:(id)arg2 searchableIndex:(id)arg3;

- (id)sqlQueryForQuery:(id)arg1;
- (id)initWithSchema:(id)arg1 protectedSchema:(id)arg2 searchableIndex:(id)arg3 accountsProvider:(id)arg4 vipManager:(id)arg5 messagePersistence:(id)arg6 mailboxPersistence:(id)arg7;
- (id)sqlQueryForQuery:(id)arg1 predicate:(id)arg2;

@end
