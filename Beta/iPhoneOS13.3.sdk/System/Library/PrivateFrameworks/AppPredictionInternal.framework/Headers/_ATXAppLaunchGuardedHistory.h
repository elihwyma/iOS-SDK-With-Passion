/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, _ATXAppDailyDose, _ATXAppInfoManager, _ATXAppLaunchHistogramManager, _ATXAppLaunchSequenceManager, _ATXDuetHelper;

@interface _ATXAppLaunchGuardedHistory : NSObject

{
    NSMutableArray *_deltaLog;
    _ATXDuetHelper *_duetHelper;
    _ATXAppDailyDose *_appDailyDose;
    _ATXAppInfoManager *_appInfoManager;
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    _ATXAppLaunchSequenceManager *_appLaunchSequenceManager;
}

@end
