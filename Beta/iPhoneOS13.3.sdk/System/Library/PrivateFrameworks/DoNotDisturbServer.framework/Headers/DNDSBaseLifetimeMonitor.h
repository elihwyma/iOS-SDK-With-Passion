/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate, OS_dispatch_queue;

@interface DNDSBaseLifetimeMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_activeLifetimeAssertionUUIDs;
    id <DNDSLifetimeMonitorDataSource> _dataSource;
    id <DNDSLifetimeMonitorDelegate> _delegate;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *sysdiagnoseDataIdentifier;
@property (copy, nonatomic, readonly) NSArray *activeLifetimeAssertionUUIDs;
@property (weak, nonatomic) id <DNDSLifetimeMonitorDataSource> dataSource;
@property (weak, nonatomic) id <DNDSLifetimeMonitorDelegate> delegate;

+ (Class)lifetimeClass;

- (id)init;
- (void)dealloc;
- (id)sysdiagnoseDataForDate:(id)arg1;
- (void)refreshMonitorFromQueueForDate:(id)arg1;
- (id)updateForModeAssertions:(id)arg1 date:(id)arg2;
- (void)refreshMonitorForDate:(id)arg1;

@end
