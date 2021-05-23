/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureBracketedStillImageSettings;

__attribute__((visibility("hidden")))
@interface AVCaptureStillImageRequest : NSObject

{
    CDUnknownBlockType _sbufCompletionBlock;
    CDUnknownBlockType _iosurfaceCompletionBlock;
    CDUnknownBlockType _bracketedCaptureCompletionBlock;
    long long _settingsID;
    unsigned int _shutterSoundID;
    AVCaptureBracketedStillImageSettings *_bracketedSettings;
}

@property (copy) CDUnknownBlockType sbufCompletionBlock;
@property (copy) CDUnknownBlockType iosurfaceCompletionBlock;
@property (copy) CDUnknownBlockType bracketedCaptureCompletionBlock;
@property long long settingsID;
@property unsigned int shutterSoundID;
@property (retain) AVCaptureBracketedStillImageSettings *bracketedSettings;

+ (id)request;

- (void)dealloc;

@end
