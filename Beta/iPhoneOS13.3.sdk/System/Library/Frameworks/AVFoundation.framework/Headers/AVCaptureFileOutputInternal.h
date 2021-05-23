/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVCaptureFileOutputInternal : NSObject

{
    CDStruct_1b6d18a9 maxRecordedDuration;
    long long maxRecordedFileSize;
    long long minFreeDiskSpaceLimit;
    _Bool pausesRecordingOnInterruption;
}

- (id)init;

@end
