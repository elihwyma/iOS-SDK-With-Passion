/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class HMBSQLContext, NSArray;

@interface HMBSQLStatement : HMFObject

{
    HMBSQLContext *_context;
    struct sqlite3_stmt *_statement;
    NSArray *_queryPlans;
}

@property (nonatomic) struct sqlite3_stmt *statement;
@property (weak, nonatomic, readonly) HMBSQLContext *context;
@property (nonatomic, readonly) NSArray *queryPlans;

+ (struct sqlite3_stmt *)sqlStatementForContext:(id)arg1 statement:(id)arg2;
+ (id)queryPlansForContext:(id)arg1 statement:(id)arg2;
+ (_Bool)explainStatements;
+ (void)setExplainStatements:(_Bool)arg1;

- (void)dealloc;
- (void)finalize;
- (id)initWithContext:(id)arg1 statement:(struct sqlite3_stmt *)arg2 queryPlans:(id)arg3;
- (id)initWithContext:(id)arg1 statement:(id)arg2;

@end
