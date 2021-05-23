/*
 Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

#import <MOVStreamIO/MOVStreamWriterStateFinished.h>

@interface MOVStreamWriterStateCancelled : MOVStreamWriterStateFinished

- (void)activateWithContext:(id)arg1;
- (id)cancelRecording:(id)arg1;
- (id)criticalErrorOccurred:(id)arg1 context:(id)arg2;
- (long long)writerStatus;

@end
