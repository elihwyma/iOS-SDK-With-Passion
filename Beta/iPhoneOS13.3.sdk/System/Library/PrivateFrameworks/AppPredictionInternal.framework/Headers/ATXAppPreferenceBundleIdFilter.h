/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXBundleIdFilter.h>

@class INIntent;

@interface ATXAppPreferenceBundleIdFilter : ATXBundleIdFilter

{
    INIntent *_intent;
}

- (id)initWithIntent:(id)arg1;
- (id)applyFilter:(id)arg1;

@end
