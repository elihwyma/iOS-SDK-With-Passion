/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@interface FMDaemon : NSObject

- (void)run;
- (void)initialize;
- (void)startup;
- (void)registerXPCEventHandlers;
- (void)startupWithCompletion:(CDUnknownBlockType)arg1;
- (id)xpcDarwinEventHandlers;
- (id)xpcDistributedEventHandlers;
- (id)verifyLaunchEventsConfiguration:(id)arg1 withExclusions:(id)arg2;

@end
