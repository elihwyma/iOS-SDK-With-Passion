/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/Swift-Protocol.h>

@class NSSet, NSURL;

@protocol ARRecordingTechniqueDelegate;

@protocol ARRecordingTechniqueProtocol <Swift>

@property (nonatomic, readonly) NSURL *outputFileURL;
@property (nonatomic) _Bool expectDepthData;
@property (nonatomic) _Bool expectAudioData;
@property (nonatomic) _Bool expectCustomData;
@property (nonatomic) _Bool shouldSaveVideoInPhotosLibrary;
@property (weak) id <ARRecordingTechniqueDelegate> recordingTechniqueDelegate;
@property (nonatomic, readonly) unsigned long long recordingSensorDataTypes;
@property (nonatomic, readonly) NSSet *recordingResultDataClasses;

+ (unsigned short)metadataIdentifierForARRecordableResultsClass: /* Error: Ran out of types for this method. */;

- (unsigned short)startRecording;
- (unsigned short)initWithFileURL:recordingSensorDataTypes:recordingResultDataClasses: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithFileURL:sensorDataTypes: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithFileURL:recordingSensorDataTypes:recordingResultDataClasses:startImmediately: /* Error: Ran out of types for this method. */;
- (unsigned short)finishRecording;
- (unsigned short)recordCustomData:forTimestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)abortRecording;

@end
