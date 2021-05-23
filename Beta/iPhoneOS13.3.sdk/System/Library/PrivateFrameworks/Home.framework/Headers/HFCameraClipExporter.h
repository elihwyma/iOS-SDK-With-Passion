/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@interface HFCameraClipExporter : NSObject

+ (id)destinationURLForMovieFileFromCameraClipUUIDString:(id)arg1;
+ (id)destinationURLForStrippedAudioFileFromCameraClipUUIDString:(id)arg1;
+ (id)destinationURLForUploadPayloadFromCameraClipUUIDString:(id)arg1;
+ (_Bool)hasCachedRecordingForCameraClip:(id)arg1;
+ (id)_exportableCameraName:(id)arg1;
+ (double)durationOfCachedRecordingForCameraClip:(id)arg1;
+ (id)userFriendlyExportURLForCameraName:(id)arg1 withStartDate:(id)arg2;

@end
