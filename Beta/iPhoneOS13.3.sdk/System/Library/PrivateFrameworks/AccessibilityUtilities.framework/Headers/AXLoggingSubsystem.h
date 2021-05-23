/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@interface AXLoggingSubsystem : NSObject

{
    _Bool _ignoreLogging;
}

@property (nonatomic) _Bool ignoreLogging;

+ (void)initialize;
+ (id)sharedInstance;
+ (id)identifier;
+ (double)threshold;
+ (id)errorWithDescription:(id)arg1;
+ (void)initializeSubsytem;
+ (id)_errorWithMessage:(id)arg1 underlyingError:(id)arg2;
+ (id)subsystems;
+ (id)wrapError:(id)arg1 description:(id)arg2;
+ (_Bool)shouldIncludeBacktraceInLogs;
+ (_Bool)shouldIncludeFileLineAndFunctionInLogs;
+ (_Bool)shouldProcessMessageForLogs;
+ (int)defaultLogLevel;
+ (_Bool)willLog;
+ (_Bool)willLogInfo;
+ (_Bool)willLogDebug;

@end
