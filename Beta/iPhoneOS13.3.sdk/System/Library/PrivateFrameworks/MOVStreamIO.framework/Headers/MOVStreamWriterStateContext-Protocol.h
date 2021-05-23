/*
 Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

#import <MOVStreamIO/Swift-Protocol.h>

@class NSArray, NSError;

@protocol MOVStreamWriterStateContext <Swift>

@property (retain) NSArray *movMetadataItems;
@property (retain) NSError *criticalError;

- (unsigned short)processFinishRecording;
- (unsigned short)finishAVWriter;
- (unsigned short)executePrepareToRecordWithMovieMetadata: /* Error: Ran out of types for this method. */;
- (unsigned short)finishAndDrainFifoFirst;
- (unsigned short)deleteMOVFile;
- (unsigned short)deleteFileOnCancel;
- (unsigned short)processCancelRecording;
- (unsigned short)processForceFinishRecording;

@end
