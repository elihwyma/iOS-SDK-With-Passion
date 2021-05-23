/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

#import <SiriCore/Swift-Protocol.h>

@class NSArray, NSString;

@protocol SiriCoreSQLiteValue;

@interface SiriCoreSQLiteQueryCriterion : NSObject <Swift>

{
    NSString *_columnName;
    long long _comparisonOperator;
    long long _logicalOperator;
    id <SiriCoreSQLiteValue> _value;
    NSArray *_values;
    NSArray *_subcriteria;
}

@property (copy, nonatomic, readonly) NSString *columnName;
@property (nonatomic, readonly) long long comparisonOperator;
@property (nonatomic, readonly) long long logicalOperator;
@property (copy, nonatomic, readonly) id <SiriCoreSQLiteValue> value;
@property (copy, nonatomic, readonly) NSArray *values;
@property (copy, nonatomic, readonly) NSArray *subcriteria;

+ (id)equalToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;
+ (id)greaterThanQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;
+ (id)greaterThanOrEqualToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;
+ (id)lessThanQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;
+ (id)lessThanOrEqualToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;
+ (id)notEqualToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;
+ (id)andQueryCriterionWithSubcriteria:(id)arg1;
+ (id)andQueryCriterionWithSubcriteriaProvider:(CDUnknownBlockType)arg1;
+ (id)orQueryCriterionWithSubcriteria:(id)arg1;
+ (id)orQueryCriterionWithSubcriteriaProvider:(CDUnknownBlockType)arg1;
+ (id)betweenQueryCriterionWithColumnName:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 negation:(_Bool)arg4;
+ (id)inQueryCriterionWithColumnName:(id)arg1 values:(id)arg2 negation:(_Bool)arg3;
+ (id)isQueryCriterionWithColumnName:(id)arg1 value:(id)arg2 negation:(_Bool)arg3;
+ (id)isNullQueryCriterionWithColumnName:(id)arg1 negation:(_Bool)arg2;
+ (id)likeQueryCriterionWithColumnName:(id)arg1 value:(id)arg2 negation:(_Bool)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColumnName:(id)arg1 comparisonOperator:(long long)arg2 logicalOperator:(long long)arg3 value:(id)arg4 values:(id)arg5 subcriteria:(id)arg6;
- (id)initWithColumnName:(id)arg1 comparisonOperator:(long long)arg2 logicalOperator:(long long)arg3 value:(id)arg4 values:(id)arg5 subcriteriaProvider:(CDUnknownBlockType)arg6;

@end
