/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class DNDSModeAssertionManager, DNDSScheduleSettings;

@protocol DNDSScheduleManagerDataSource;

@interface DNDSScheduleManager : NSObject

{
    DNDSModeAssertionManager *_modeAssertionManager;
    DNDSScheduleSettings *_currentScheduleSettings;
    id <DNDSScheduleManagerDataSource> _dataSource;
}

@property (weak, nonatomic) id <DNDSScheduleManagerDataSource> dataSource;

- (void)refresh;
- (void)_refreshWithScheduleSettings:(id)arg1 context:(id)arg2;
- (id)initWithModeAssertionManager:(id)arg1;

@end
