/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface iOSPMR : NSObject

{
    _Bool gPMR_ENABLED;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (unsigned long long)returnStartTime_Nanoseconds;
- (double)returnDelta_Milliseconds:(unsigned long long)arg1;
- (id)stopTimerAndReportPMR:(unsigned long long)arg1 logFilename:(id)arg2 pmrKey:(id)arg3 comment:(id)arg4;
- (unsigned long long)returnDelta_Nanoseconds:(unsigned long long)arg1;
- (double)convertNanoSecondsToSeconds:(unsigned long long)arg1;
- (void)writePMRInfoToFile:(id)arg1 pmrString:(id)arg2;
- (void)addDelta:(unsigned long long)arg1 toArray:(id)arg2;

@end
