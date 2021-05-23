/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, _ATXDuetHelper, _ATXInternalUninstallNotification;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _APRParzenModel : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    _ATXDuetHelper *_duetHelper;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    NSString *_path;
    _Bool _waitingLoad;
    struct _opaque_pthread_mutex_t _lock;
    NSDictionary *_parzenHistograms;
    NSObject<OS_dispatch_source> *_timer;
    long long _intentSource;
}

@property (nonatomic, readonly) NSString *path;

+ (id)defaultPathForIntentSource:(long long)arg1;

- (id)init;
- (void)dealloc;
- (float)predict:(id)arg1;
- (_Bool)loadModel;
- (void)train;
- (void)removeHistoryForAllBundleIds:(id)arg1;
- (id)initWithIntentSource:(long long)arg1;
- (id)initWithDuetHelper:(id)arg1 path:(id)arg2 intentSource:(long long)arg3;
- (void)_registerForUninstallNotifications;
- (void)loadOrTrain;
- (void)scheduleTrain;
- (void)scheduleTrainImmediately;
- (void)_syncTrain;
- (void)_cancelTrainTimer;
- (void)_trainModel;
- (void)trainModelFrom:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)modelFromEvents:(id)arg1;
- (id)parzenHistograms;
- (void)writeModel;

@end
