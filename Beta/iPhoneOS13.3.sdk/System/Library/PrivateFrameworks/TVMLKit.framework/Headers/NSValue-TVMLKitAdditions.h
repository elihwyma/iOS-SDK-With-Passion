/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSValue.h>

@interface NSValue (TVMLKitAdditions)

+ (id)tv_valueWithCellMetrics:(struct TVCellMetrics)arg1;
+ (id)tv_valueWithRowMetrics:(struct TVRowMetrics)arg1;

- (struct TVCellMetrics)tv_cellMetricsValue;
- (struct TVRowMetrics)tv_rowMetricsValue;

@end
