/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBSQLStatement.h>

@class NSDictionary;

@interface HMBSQLQueryStatement : HMBSQLStatement

{
    NSDictionary *_arguments;
}

@property (nonatomic, readonly) NSDictionary *arguments;

- (id)initWithContext:(id)arg1 statement:(id)arg2;
- (id)initWithContext:(id)arg1 statement:(struct sqlite3_stmt *)arg2 queryPlans:(id)arg3 arguments:(id)arg4;

@end
