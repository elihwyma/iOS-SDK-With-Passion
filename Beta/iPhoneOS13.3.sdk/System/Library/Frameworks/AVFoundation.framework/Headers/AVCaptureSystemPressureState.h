/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureSystemPressureStateInternal, NSString;

@interface AVCaptureSystemPressureState : NSObject

{
    AVCaptureSystemPressureStateInternal *_internal;
}

@property (readonly) NSString *level;
@property (readonly) unsigned long long factors;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)initWithFigLevel:(int)arg1 factors:(unsigned long long)arg2 recommendedFrameRateRangeForPortrait:(id)arg3;
- (int)figLevel;
- (id)recommendedFrameRateRangeForPortrait;
- (id)spiDebugDescription;

@end
