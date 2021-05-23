/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class NSArray, NSDictionary, NSMapTable, NSNumber, NSString;

@interface HMBModelQuery : HMFObject

{
    NSString *_sqlPredicate;
    NSArray *_sqlColumns;
    unsigned long long _maximumRowsPerSelect;
    NSNumber *_initialSequence;
    NSDictionary *_arguments;
    NSMapTable *_preparedQueries;
    Class _modelClass;
    NSString *_sqlSelect;
    NSDictionary *_argumentFields;
    NSDictionary *_defaultArgumentValues;
}

@property (nonatomic, readonly) NSString *sqlPredicate;
@property (nonatomic, readonly) NSArray *sqlColumns;
@property (nonatomic, readonly) unsigned long long maximumRowsPerSelect;
@property (nonatomic, readonly) NSNumber *initialSequence;
@property (nonatomic, readonly) NSDictionary *arguments;
@property (nonatomic, readonly) NSMapTable *preparedQueries;
@property (retain, nonatomic) Class modelClass;
@property (nonatomic, readonly) NSString *sqlSelect;
@property (nonatomic, readonly) NSDictionary *argumentFields;
@property (nonatomic, readonly) NSDictionary *defaultArgumentValues;
@property (nonatomic, readonly) _Bool hasExpectedIndexes;

- (id)description;
- (id)prepareOnTable:(id)arg1;
- (id)initWithSQLPredicate:(id)arg1 sqlColumns:(id)arg2 initialSequence:(id)arg3 maximumRowsPerSelect:(unsigned long long)arg4 arguments:(id)arg5;
- (id)performQueryOn:(id)arg1 arguments:(id)arg2;

@end
