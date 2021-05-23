/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@interface SSSpringBoardUtility : NSObject

+ (id)_dispatchQueue;
+ (id)_applicationStateMonitor;
+ (void)wakeAppUsingRequest:(id)arg1;
+ (id)_dispatchQueueSpringBoard;
+ (_Bool)launchApplicationWithIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (_Bool)_getProcessID:(int *)arg1 forApplicationIdentifier:(id)arg2;
+ (void)_setApplicationState:(unsigned int)arg1 forClientID:(id)arg2;
+ (id)_getApplicationInfoForIdentifier:(id)arg1 key:(id)arg2;
+ (id)_stateCache;
+ (id)_dispatchQueueNotifications;

@end
