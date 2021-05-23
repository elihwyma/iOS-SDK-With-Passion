/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class CNContactStore, DNDSSyncSettingsProvider, NSString;

@protocol DNDSBackingStore, DNDSSettingsManagerDelegate, OS_dispatch_queue;

@interface DNDSSettingsManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <DNDSBackingStore> _backingStore;
    CNContactStore *_contactStore;
    DNDSSyncSettingsProvider *_syncSettingsProvider;
    id <DNDSSettingsManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <DNDSSettingsManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *sysdiagnoseDataIdentifier;

- (void)dealloc;
- (id)sysdiagnoseDataForDate:(id)arg1;
- (id)_readSettingsReturningError:(id *)arg1;
- (unsigned long long)_saveBehaviorSettings:(id)arg1 phoneCallBypassSettings:(id)arg2 scheduleSettings:(id)arg3 error:(id *)arg4;
- (id)behaviorSettingsWithError:(id *)arg1;
- (id)phoneCallBypassSettingsWithError:(id *)arg1;
- (id)scheduleSettingsWithError:(id *)arg1;
- (id)syncSettingsWithError:(id *)arg1;
- (void)syncSettingsProvider:(id)arg1 didReceiveUpdatedSyncSettings:(id)arg2;
- (id)initWithBackingStore:(id)arg1 contactStore:(id)arg2;
- (_Bool)setBehaviorSettings:(id)arg1 withError:(id *)arg2;
- (_Bool)setPhoneCallBypassSettings:(id)arg1 withError:(id *)arg2;
- (_Bool)setScheduleSettings:(id)arg1 withError:(id *)arg2;

@end
