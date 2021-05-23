/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_source;

@interface SBDaemonContext : NSObject

{
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSMutableDictionary *_daemonRequests;
    int _pid;
}

- (id)description;
- (int)pid;
- (id)initWithPid:(int)arg1 queue:(id)arg2;
- (void)addRequest:(id)arg1 forKey:(id)arg2;
- (void)removeRequestForKey:(id)arg1;
- (id)_newDispatchSourceForPid:(int)arg1 queue:(id)arg2;
- (void)_handleCancelation;

@end
