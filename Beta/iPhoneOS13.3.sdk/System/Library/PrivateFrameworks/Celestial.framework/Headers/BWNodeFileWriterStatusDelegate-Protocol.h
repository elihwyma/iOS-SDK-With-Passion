/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/Swift-Protocol.h>

@protocol BWNodeFileWriterStatusDelegate <Swift>

- (unsigned short)fileWriter:startedRecordingForSettings:writerPipelineIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)fileWriter:pausedRecordingForSettingsID: /* Error: Ran out of types for this method. */;
- (unsigned short)fileWriter:resumedRecordingForSettingsID: /* Error: Ran out of types for this method. */;
- (unsigned short)fileWriter:writerPipelineIndex:stoppedRecordingForSettings:withError:thumbnailSurface:irisMovieInfo:debugMetadataSidecarFileURL:recordingSucceeded: /* Error: Ran out of types for this method. */;
- (unsigned short)fileWriter:writerPipelineIndex:stoppedRecordingSampleDataForSettingsID: /* Error: Ran out of types for this method. */;

@end
