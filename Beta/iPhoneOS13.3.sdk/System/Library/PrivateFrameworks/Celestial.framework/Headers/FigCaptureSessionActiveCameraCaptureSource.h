/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWFigVideoCaptureDevice, NSString;

@interface FigCaptureSessionActiveCameraCaptureSource : NSObject

{
    struct OpaqueFigCaptureSource *_source;
    BWFigVideoCaptureDevice *_device;
    NSString *_nonLocalizedName;
    int _deviceType;
}

@property (nonatomic, readonly) struct OpaqueFigCaptureSource *source;
@property (nonatomic, readonly) BWFigVideoCaptureDevice *device;
@property (nonatomic, readonly) NSString *nonLocalizedName;
@property (nonatomic, readonly) int deviceType;

- (void)dealloc;
- (id)initWithSource:(struct OpaqueFigCaptureSource *)arg1 device:(id)arg2;

@end
