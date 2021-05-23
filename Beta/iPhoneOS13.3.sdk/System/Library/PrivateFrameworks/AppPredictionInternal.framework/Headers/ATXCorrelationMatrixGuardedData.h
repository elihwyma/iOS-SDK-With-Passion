/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface ATXCorrelationMatrixGuardedData : NSObject

{
    NSMutableDictionary *_correlationMatrix;
    NSMutableDictionary *_locationTotals;
}

- (id)init;
- (id)initWithCorrelationMatrix:(id)arg1 locationTotals:(id)arg2;

@end
