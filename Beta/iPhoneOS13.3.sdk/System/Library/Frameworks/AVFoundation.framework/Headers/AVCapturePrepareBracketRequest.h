/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class FigCaptureStillImageSettings;

__attribute__((visibility("hidden")))
@interface AVCapturePrepareBracketRequest : NSObject

{
    CDUnknownBlockType _completionBlock;
    FigCaptureStillImageSettings *_settings;
}

@property (readonly) FigCaptureStillImageSettings *settings;
@property (readonly) CDUnknownBlockType completionBlock;

+ (id)prepareBracketRequestWithCompletionBlock:(CDUnknownBlockType)arg1 settings:(id)arg2;

- (void)dealloc;
- (id)_initWithCompletionBlock:(CDUnknownBlockType)arg1 settings:(id)arg2;

@end
