/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLValueComparison : NSObject

{
    short _comparisonOperation;
    NSString *_key;
    id _value;
}

@property (readonly) NSString *key;
@property (readonly) id value;
@property (readonly) short comparisonOperation;
@property (readonly) _Bool hasNilComparisonComponent;
@property (readonly) _Bool hasEqualComparisonComponent;
@property (readonly) _Bool hasGreaterThanComparisonComponent;
@property (readonly) _Bool hasLessThanComparisonComponent;
@property (readonly) NSString *comparisonOperationString;
@property (readonly) NSString *sqlWhereClause;

- (id)description;
- (id)initWithKey:(id)arg1 withValue:(id)arg2 withComparisonOperation:(short)arg3;

@end
