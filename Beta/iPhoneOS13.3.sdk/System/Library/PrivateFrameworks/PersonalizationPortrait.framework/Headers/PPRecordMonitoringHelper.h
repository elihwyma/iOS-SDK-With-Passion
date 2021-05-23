/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class NSMapTable, NSString;

@protocol OS_dispatch_queue;

@interface PPRecordMonitoringHelper : NSObject

{
    NSMapTable *_delegates;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
}

- (id)initWithName:(id)arg1;
- (_Bool)loadRecordsAndMonitorChangesWithDelegate:(id)arg1 recordGenerator:(CDUnknownBlockType)arg2 notificationRegistrationBlock:(CDUnknownBlockType)arg3;
- (void)loadRecordsWithDelegate:(id)arg1 recordGenerator:(CDUnknownBlockType)arg2;
- (void)handleChangeNotificationWithName:(id)arg1 afterDelaySeconds:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (void)sendResetToAllDelegatesWithRecordGenerator:(CDUnknownBlockType)arg1;
- (void)resetWithDelegate:(id)arg1 recordGenerator:(CDUnknownBlockType)arg2;
- (void)sendChangesToDelegatesWithChangeGenerator:(CDUnknownBlockType)arg1 recordGenerator:(CDUnknownBlockType)arg2;
- (id)_setupRecentChangesWithDelegates:(id)arg1 recordGenerator:(CDUnknownBlockType)arg2;
- (id)_handleRecentChangesWithDelegates:(id)arg1 changeGenerator:(CDUnknownBlockType)arg2 recordGenerator:(CDUnknownBlockType)arg3;

@end
