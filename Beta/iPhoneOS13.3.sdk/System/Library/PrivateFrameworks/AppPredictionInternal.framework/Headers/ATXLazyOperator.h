/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber;

@interface ATXLazyOperator : NSObject

{
    NSArray *_operands;
    NSNumber *_executedResult;
}

@property (retain, nonatomic) NSArray *operands;
@property (retain, nonatomic) NSNumber *executedResult;

- (double)execute;
- (double)opExecute;

@end
