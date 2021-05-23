/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXApp2VecMapping, NSDictionary;

@interface ATXNotificationsPriors : NSObject

{
    NSDictionary *_parameters;
    double _defaultPrior;
    ATXApp2VecMapping *_appFeatures;
}

+ (id)sharedInstance;

- (id)init;
- (id)initWithAssetClass:(Class)arg1 andPathToAppFeatures:(id)arg2;
- (double)getPriorForAppId:(id)arg1;
- (double)getAppBiasForBundleId:(id)arg1;

@end
