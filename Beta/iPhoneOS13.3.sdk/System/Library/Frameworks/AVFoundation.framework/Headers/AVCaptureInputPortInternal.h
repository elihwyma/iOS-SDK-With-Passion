/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureInput, NSString;

__attribute__((visibility("hidden")))
@interface AVCaptureInputPortInternal : NSObject

{
    AVCaptureInput *input;
    NSString *mediaType;
    struct opaqueCMFormatDescription *formatDescription;
    struct OpaqueCMClock *clock;
    _Bool enabled;
    int changeSeed;
    NSString *sourceID;
    NSString *sourceDeviceType;
    long long sourceDevicePosition;
}

- (id)init;
- (void)dealloc;

@end
