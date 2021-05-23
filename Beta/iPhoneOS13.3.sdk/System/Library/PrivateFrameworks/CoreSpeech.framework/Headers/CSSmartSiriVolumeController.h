/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSXPCClient, NSString;

@protocol CSSmartSiriVolumeControllerDelegate, OS_dispatch_queue;

@interface CSSmartSiriVolumeController : NSObject

{
    id <CSSmartSiriVolumeControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    CSXPCClient *_xpcClient;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSXPCClient *xpcClient;
@property (weak, nonatomic) id <CSSmartSiriVolumeControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_createXPCClientConnectionIfNeeded;
- (void)CSVolumeMonitor:(id)arg1 didReceiveMusicVolumeChanged:(float)arg2;
- (void)CSVolumeMonitor:(id)arg1 didReceiveAlarmVolumeChanged:(float)arg2;
- (void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2;
- (void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2;
- (void)CSSmartSiriVolumeDidReceiveAlarmChanged:(long long)arg1;
- (void)CSSmartSiriVolumeDidReceiveTimerChanged:(long long)arg1;
- (void)CSSmartSiriVolumeDidReceiveMusicVolumeChanged:(float)arg1;
- (float)getEstimatedTTSVolume;

@end
