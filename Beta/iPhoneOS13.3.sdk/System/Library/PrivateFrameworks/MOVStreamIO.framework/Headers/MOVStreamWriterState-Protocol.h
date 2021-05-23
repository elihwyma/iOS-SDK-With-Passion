/*
 Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

#import <MOVStreamIO/Swift-Protocol.h>

@protocol MOVStreamWriterState <Swift>

@property (readonly) long long writerStatus;

- (unsigned short)activateWithContext: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareRecording: /* Error: Ran out of types for this method. */;
- (unsigned short)canConfigure: /* Error: Ran out of types for this method. */;
- (unsigned short)canAppendData: /* Error: Ran out of types for this method. */;
- (unsigned short)canWriteData: /* Error: Ran out of types for this method. */;
- (unsigned short)stopWriterWhenFifosAreEmpty: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareFinished: /* Error: Ran out of types for this method. */;
- (unsigned short)finishRecording: /* Error: Ran out of types for this method. */;
- (unsigned short)forceFinishRecording: /* Error: Ran out of types for this method. */;
- (unsigned short)nextFinishStep: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelRecording: /* Error: Ran out of types for this method. */;
- (unsigned short)finishedCancelRecording: /* Error: Ran out of types for this method. */;
- (unsigned short)criticalErrorOccurred:context: /* Error: Ran out of types for this method. */;

@end
