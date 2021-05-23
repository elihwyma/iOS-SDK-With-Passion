/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@protocol MTLCaptureScope;

@interface MTLCaptureManager : NSObject

{
    _Bool _isCapturing;
    id <MTLCaptureScope> _defaultCaptureScope;
}

@property (retain) id <MTLCaptureScope> defaultCaptureScope;
@property (readonly) _Bool isCapturing;

+ (id)sharedCaptureManager;

- (void)dealloc;
- (id)newCaptureScopeWithDevice:(id)arg1;
- (id)newCaptureScopeWithCommandQueue:(id)arg1;
- (void)stopCapture;
- (_Bool)startCaptureWithDescriptor:(id)arg1 error:(id *)arg2;
- (void)startCaptureWithDevice:(id)arg1;
- (void)startCaptureWithCommandQueue:(id)arg1;
- (void)startCaptureWithScope:(id)arg1;
- (_Bool)supportsDestination:(long long)arg1;

@end
