/*
 Image: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
 */

#import <HardwareSupport/HSCMBaseObject.h>

@class HSFigCaptureDevice;

@interface HSFigCaptureStream : HSCMBaseObject

{
    HSFigCaptureDevice *_device;
    struct OpaqueFigCaptureStream *_underlyingStream;
}

@property (nonatomic, readonly) struct OpaqueFigCaptureStream *underlyingStream;
@property (nonatomic, readonly) HSFigCaptureDevice *device;

+ (id)statusDescription:(int)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)valueForKey:(id)arg1;
- (_Bool)start:(id *)arg1;
- (_Bool)stop:(id *)arg1;
- (_Bool)isEqualToStream:(id)arg1;
- (id)initWithCaptureStream:(struct OpaqueFigCaptureStream *)arg1 fromDevice:(id)arg2;

@end
