/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXBundleIdFilter.h>

@interface ATXAppConnectionBundleIdFilter : ATXBundleIdFilter

{
    int _minTotalLaunches;
    int _minAverageLaunches;
}

- (id)initInternal;
- (id)applyFilter:(id)arg1;

@end
