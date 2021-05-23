/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/REMXPCDaemonControllerPerformerResolver.h>

@class REMStoreContainerToken;

@interface REMXPCDaemonControllerPerformerResolver_changeTracking : REMXPCDaemonControllerPerformerResolver

{
    REMStoreContainerToken *_storeContainerToken;
}

@property (nonatomic, readonly) REMStoreContainerToken *storeContainerToken;

- (id)name;
- (id)initWithStoreContainerToken:(id)arg1;
- (void)resolveWithDaemon:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
