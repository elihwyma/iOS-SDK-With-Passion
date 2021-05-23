/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface TDLogger : NSObject

{
    NSObject<OS_dispatch_queue> *_loggingQueue;
    int _verbosity;
    int _logMaxVerbosity;
}

@property (nonatomic) int verbosity;

+ (id)logger;
+ (id)defaultLogger;

- (id)init;
- (void)dealloc;
- (void)logInfo:(id)arg1;
- (void)logError:(id)arg1;
- (void)logMessage:(id)arg1 whenVerbosity:(int)arg2;
- (void)logExtra:(id)arg1;
- (void)logWarning:(id)arg1;
- (void)logExtraWithFormat:(id)arg1;
- (void)logInfoWithFormat:(id)arg1;
- (void)logWarningWithFormat:(id)arg1;
- (void)logErrorWithFormat:(id)arg1;
- (_Bool)isVerbosityLogErrorsOnly;
- (_Bool)isVerbosityLogWarningsAndErrors;
- (_Bool)isVerbosityLogEverything;
- (void)waitForLoggingToComplete;

@end
