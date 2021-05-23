/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@interface JTEffectContinousPreviewOptions : NSObject

{
    _Bool _loopAnimation;
    _Bool _useCameraAsBackground;
    unsigned long long _preferredUpdatesPerSecond;
    CDStruct_1b6d18a9 _effectAnimationDuration;
}

@property (nonatomic) CDStruct_1b6d18a9 effectAnimationDuration;
@property (nonatomic) _Bool loopAnimation;
@property (nonatomic) unsigned long long preferredUpdatesPerSecond;
@property (nonatomic) _Bool useCameraAsBackground;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrameRate:(unsigned long long)arg1;
- (id)initForLiveCameraWithFrameRate:(unsigned long long)arg1;

@end
