/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class NPSDomainAccessor, NPSManager, NSString;

@protocol DNDSSettingsSyncManagerDataSource, DNDSSettingsSyncManagerDelegate;

@interface DNDSLegacySettingsSyncManager : NSObject

{
    _Bool _listen;
    _Bool _send;
    NPSManager *_npsManager;
    NPSDomainAccessor *_accessor;
    id <DNDSSettingsSyncManagerDataSource> _dataSource;
    id <DNDSSettingsSyncManagerDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <DNDSSettingsSyncManagerDataSource> dataSource;
@property (weak, nonatomic) id <DNDSSettingsSyncManagerDelegate> delegate;

+ (void)cleanupState;
+ (id)sendManagerForPairedDevice:(id)arg1;
+ (id)receiveManagerForPairedDevice:(id)arg1;

- (void)dealloc;
- (void)resume;
- (void)update;
- (void)_endMonitoringForChanges;
- (void)_beginMonitoringForChanges;
- (id)_initWithListen:(_Bool)arg1 send:(_Bool)arg2 pairedDevice:(id)arg3;
- (void)_updateBypassSettings;
- (void)_updateScheduleSettingsWithDate:(id)arg1;
- (void)_propagateBypassSettings:(id)arg1;
- (void)_propagateScheduleSettings:(id)arg1;

@end
