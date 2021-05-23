/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface HDSQLiteQueryPlan : NSObject

{
    _Bool _includesTableScan;
    _Bool _usesIndex;
    _Bool _usesCoveringIndex;
    NSArray *_queryPlanRows;
    NSArray *_indices;
}

@property (copy, nonatomic, readonly) NSArray *queryPlanRows;
@property (nonatomic, readonly) _Bool includesTableScan;
@property (nonatomic, readonly) _Bool usesIndex;
@property (nonatomic, readonly) _Bool usesCoveringIndex;
@property (nonatomic, readonly) NSArray *indices;

- (id)description;
- (id)initWithQueryPlanRows:(id)arg1;

@end
