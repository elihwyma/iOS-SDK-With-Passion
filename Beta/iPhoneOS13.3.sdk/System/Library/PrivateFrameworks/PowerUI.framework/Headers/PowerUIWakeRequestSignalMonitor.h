/*
 Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

#import <Foundation/NSObject.h>

@class NSString, _CDContextualChangeRegistration;

@protocol OS_os_log, PowerUISignalMonitorDelegate, _CDContext;

@interface PowerUIWakeRequestSignalMonitor : NSObject

{
    id <PowerUISignalMonitorDelegate> _delegate;
    NSObject<OS_os_log> *_log;
    id <_CDContext> _context;
    _CDContextualChangeRegistration *_registration;
}

@property (retain, nonatomic) id <PowerUISignalMonitorDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) id <_CDContext> context;
@property (retain, nonatomic) _CDContextualChangeRegistration *registration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDelegate:(id)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)nextUserVisibleWakeDate;
- (unsigned long long)signalID;
- (id)requiredFullChargeDate;

@end
