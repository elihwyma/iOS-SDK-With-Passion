/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUAssertionHandler : NSObject

+ (void)simulateCrashWithMessage:(id)arg1;
+ (id)performBlockIgnoringAssertions:(CDUnknownBlockType)arg1;
+ (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 isFatal:(_Bool)arg4 description:(const char *)arg5;
+ (void)logBacktraceThrottled;
+ (id)p_performBlockIgnoringAssertions:(CDUnknownBlockType)arg1 onlyFatal:(_Bool)arg2;
+ (void)logBacktraceWithCallStackSymbols:(id)arg1;
+ (id)performBlockIgnoringFatalAssertions:(CDUnknownBlockType)arg1;
+ (int)_atomicIncrementAssertCount;
+ (void)logBacktrace;

@end
