/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString, _ATXDuetHelper, _PASLock;

@interface ATXAppLaunchMicroLocation : NSObject

{
    _PASLock *_lock;
    _ATXDuetHelper *_duetHelper;
    NSString *_path;
}

- (id)init;
- (void)train;
- (id)initWithDuetHelper:(id)arg1 directory:(id)arg2 forTesting:(_Bool)arg3;
- (void)_subscribeToDKInsertionEvents;
- (void)_receivedNotificationOfNewMicroLocation;
- (double)popularityAtCurrentMicroLocationForApp:(id)arg1;
- (double)popularityAtCurrentMicroLocationForActionKey:(id)arg1;
- (void)_writeAppLaunchCorrelationMatrix:(id)arg1 actionKeyCorrelationMatrix:(id)arg2;
- (_Bool)loadCorrelationMatrices;
- (id)_getHistoricalData;
- (id)_getAppLaunchCorrelationMatrix;
- (id)_getActionKeyCorrelationMatrix;

@end
