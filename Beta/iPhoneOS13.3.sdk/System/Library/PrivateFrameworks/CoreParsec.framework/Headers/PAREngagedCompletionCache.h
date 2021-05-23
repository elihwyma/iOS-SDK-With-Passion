/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <Foundation/NSObject.h>

@interface PAREngagedCompletionCache : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)addCompletion:(id)arg1 forInput:(id)arg2;
- (void)clearCompletionsFromDate:(id)arg1 toDate:(id)arg2;
- (void)updateParameters:(double)arg1 safariLast1day:(double)arg2 safariLast1week:(double)arg3 safariLast1month:(double)arg4 safariAll:(double)arg5 safariMostRecent:(double)arg6 minThresholdToSend:(double)arg7;
- (void)clearAllCompletions;

@end
