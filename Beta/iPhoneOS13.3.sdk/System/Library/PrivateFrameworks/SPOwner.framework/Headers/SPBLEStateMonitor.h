/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@protocol SPBLEStateMonitorDelegate;

__attribute__((visibility("hidden")))
@interface SPBLEStateMonitor : NSObject

{
    unsigned long long _bleState;
    id <SPBLEStateMonitorDelegate> _delegate;
}

@property (nonatomic) unsigned long long bleState;
@property (weak, nonatomic) id <SPBLEStateMonitorDelegate> delegate;

- (id)init;
- (void)startMonitoring;
- (void)_updateBLEStatus;
- (void)notifyDelegate:(unsigned long long)arg1;

@end
