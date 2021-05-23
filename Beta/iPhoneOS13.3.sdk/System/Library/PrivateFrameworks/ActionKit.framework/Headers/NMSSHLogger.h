/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface NMSSHLogger : NSObject

{
    _Bool _enabled;
    CDUnknownBlockType _logBlock;
    unsigned long long _logLevel;
    NSObject<OS_dispatch_queue> *_loggerQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property (copy, nonatomic) CDUnknownBlockType logBlock;
@property (nonatomic) unsigned long long logLevel;
@property (nonatomic, getter=isEnabled) _Bool enabled;

+ (id)logger;
+ (id)sharedLogger;

- (void)log:(id)arg1 level:(unsigned long long)arg2 flag:(unsigned long long)arg3;
- (void)logVerbose:(id)arg1;
- (void)logInfo:(id)arg1;
- (void)logWarn:(id)arg1;
- (void)logError:(id)arg1;

@end
