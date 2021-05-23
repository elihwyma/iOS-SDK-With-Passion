/*
 Image: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
 */

#import <HardwareSupport/HSCMBaseObject.h>

@interface HSFigCaptureDevice : HSCMBaseObject

{
    struct OpaqueFigCaptureDevice *_underlyingDevice;
}

@property (nonatomic, readonly) struct OpaqueFigCaptureDevice *underlyingDevice;

+ (id)statusDescription:(int)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)invalidate:(id *)arg1;
- (id)valueForKey:(id)arg1;
- (_Bool)isEqualToDevice:(id)arg1;
- (id)valueForProperty:(struct __CFString *)arg1 error:(id *)arg2;
- (_Bool)setValue:(id)arg1 forProperty:(struct __CFString *)arg2 error:(id *)arg3;
- (id)initWithCaptureDevice:(struct OpaqueFigCaptureDevice *)arg1;
- (id)streams:(id *)arg1;
- (_Bool)requestControlOfStreams:(id)arg1 error:(id *)arg2;
- (_Bool)relinquishControlOfStreams:(id)arg1 error:(id *)arg2;
- (id)synchronizedStreamsGroups:(id *)arg1;

@end
