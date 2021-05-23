/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureInput, AVCaptureInputPortInternal, NSString;

@interface AVCaptureInputPort : NSObject

{
    AVCaptureInputPortInternal *_internal;
}

@property (nonatomic, readonly) AVCaptureInput *input;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) const struct opaqueCMFormatDescription *formatDescription;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) struct OpaqueCMClock *clock;
@property (nonatomic, readonly) NSString *sourceDeviceType;
@property (nonatomic, readonly) long long sourceDevicePosition;

+ (id)portWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription *)arg3 enabled:(_Bool)arg4 sourceDeviceType:(id)arg5 sourceDevicePosition:(long long)arg6;
+ (_Bool)automaticallyNotifiesObserversOfClock;

- (void)dealloc;
- (id)description;
- (void)setOwner:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)sourceID;
- (int)changeSeed;
- (void)bumpChangeSeed;
- (id)figCaptureSourceConfigurationForSessionPreset:(id)arg1;
- (void)_setClock:(struct OpaqueCMClock *)arg1;
- (void)_setFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (id)_initWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription *)arg3 enabled:(_Bool)arg4 sourceDeviceType:(id)arg5 sourceDevicePosition:(long long)arg6;
- (_Bool)sourcesFromConstituentDevice;

@end
