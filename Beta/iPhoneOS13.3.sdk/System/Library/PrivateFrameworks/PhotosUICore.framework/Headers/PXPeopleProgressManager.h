/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSTimer, PXPeopleProgressDataSource;

@interface PXPeopleProgressManager : NSObject

{
    _Bool _monitoringProgress;
    _Bool _processingComplete;
    PXPeopleProgressDataSource *_dataSource;
    double _updateInterval;
    double _progress;
    unsigned long long _processingStatus;
    NSTimer *_statusTimer;
}

@property double progress;
@property (retain, nonatomic) NSTimer *statusTimer;
@property (retain, nonatomic) PXPeopleProgressDataSource *dataSource;
@property (nonatomic, getter=isMonitoringProgress) _Bool monitoringProgress;
@property (nonatomic) double updateInterval;
@property (readonly) _Bool processingComplete;
@property (readonly) _Bool featureUnlocked;
@property (readonly) _Bool shouldUseInterstitial;
@property (readonly) _Bool shouldUseProgressFooter;
@property (nonatomic) unsigned long long processingStatus;

- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)_updateWithStatus:(unsigned long long)arg1 progress:(double)arg2;
- (_Bool)hasSubstantialProcessingUsingMinAssetCount:(_Bool)arg1;
- (void)updateProgressWithForce:(_Bool)arg1;
- (void)_scheduleNextUpdate;
- (void)_updateStatusForProgress:(double)arg1 processCount:(unsigned long long)arg2;
- (_Bool)_progressComplete:(double)arg1;

@end
