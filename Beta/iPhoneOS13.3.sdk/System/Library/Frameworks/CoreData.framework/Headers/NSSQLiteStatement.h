/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSCachedFetchRequestInfo, NSMutableArray, NSSQLEntity, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLiteStatement : NSObject

{
    NSSQLEntity *_entity;
    NSMutableArray *_bindVariables;
    NSMutableArray *_bindIntarrays;
    NSString *_sqlString;
    _Bool _isImpossibleCondition;
    _Bool _trackChangedRowCount;
    NSSQLEntity *_fakeEntityForFetch;
    NSCachedFetchRequestInfo *_cachedStatementInfo;
    struct sqlite3_stmt *_cachedSQLiteStatement;
    void *_owner;
}

@property (retain, nonatomic) NSCachedFetchRequestInfo *cachedStatementInfo;
@property (nonatomic) _Bool trackChangedRowCount;

- (void)dealloc;
- (id)description;
- (id)entity;
- (id)fakeEntityForFetch;
- (_Bool)isReadOnly;
- (id)sqlString;
- (id)initWithEntity:(id)arg1 sqlString:(id)arg2;
- (void)clearCaches:(_Bool)arg1;
- (struct sqlite3_stmt *)cachedSQLiteStatement;
- (unsigned int)addBindVariable:(id)arg1;
- (id)initWithEntity:(id)arg1;
- (void)setImpossibleCondition:(_Bool)arg1;
- (void)setSQLString:(id)arg1;
- (void)setBindIntarrays:(id)arg1;
- (void)setBindVariables:(id)arg1;
- (void)cacheFakeEntityForFetch:(id)arg1;
- (id)bindVariables;
- (_Bool)isImpossibleCondition;
- (id)bindIntarrays;
- (void)setCachedSQLiteStatement:(struct sqlite3_stmt *)arg1 forConnection:(id)arg2;
- (void)removeAllBindVariables;
- (unsigned int)addBindIntarray:(id)arg1;
- (void)removeAllBindIntarrays;

@end
