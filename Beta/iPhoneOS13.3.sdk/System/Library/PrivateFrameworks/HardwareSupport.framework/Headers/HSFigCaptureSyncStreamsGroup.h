/*
 Image: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
 */

#import <HardwareSupport/HSCMBaseObject.h>

@class HSFigCaptureDevice;

@interface HSFigCaptureSyncStreamsGroup : HSCMBaseObject

{
    HSFigCaptureDevice *_device;
    struct OpaqueFigCaptureSynchronizedStreamsGroup *_underlyingSyncStreamsGroup;
}

@property (nonatomic, readonly) struct OpaqueFigCaptureSynchronizedStreamsGroup *underlyingSyncStreamsGroup;
@property (nonatomic, readonly) HSFigCaptureDevice *device;

+ (id)statusDescription:(int)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)valueForKey:(id)arg1;
- (id)valueForProperty:(struct __CFString *)arg1 error:(id *)arg2;
- (_Bool)setValue:(id)arg1 forProperty:(struct __CFString *)arg2 error:(id *)arg3;
- (_Bool)isEqualToStreamsGroup:(id)arg1;
- (id)initWithCaptureSyncStreamsGroup:(struct OpaqueFigCaptureSynchronizedStreamsGroup *)arg1 fromDevice:(id)arg2;
- (id)streams:(id *)arg1;

@end
