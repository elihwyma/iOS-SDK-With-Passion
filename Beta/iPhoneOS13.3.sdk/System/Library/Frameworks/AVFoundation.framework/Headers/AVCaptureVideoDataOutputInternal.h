/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVCaptureVideoDataOutputInternal : NSObject

{
    AVWeakReference *weakReference;
    NSDictionary *videoSettings;
    NSDictionary *clientVideoSettings;
    CDStruct_1b6d18a9 deprecatedMinFrameDuration;
    _Bool alwaysDiscardsLateVideoFrames;
    _Bool automaticallyConfiguresOutputBufferDimensions;
    _Bool deliversPreviewSizedOutputBuffers;
    _Bool videoSettingsDimensionsOverrideEnabled;
    NSArray *availableVideoCVPixelFormatTypes;
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
}

- (id)init;
- (void)dealloc;

@end
