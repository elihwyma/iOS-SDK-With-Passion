/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSIndexSet, NSMutableDictionary;

@interface CEKLightingFrameCache : NSObject

{
    NSIndexSet *__availableAbsoluteAngles;
    NSMutableDictionary *__foregroundFramesByAvailableAngle;
    NSDictionary *__backgroundFrameMapsByLightingType;
}

@property (nonatomic, readonly) NSIndexSet *_availableAbsoluteAngles;
@property (retain, nonatomic) NSMutableDictionary *_foregroundFramesByAvailableAngle;
@property (retain, nonatomic) NSDictionary *_backgroundFrameMapsByLightingType;
@property (nonatomic, readonly) unsigned long long angleCount;

- (id)init;
- (_Bool)_needsForegroundFrames;
- (id)_renderForegroundFramesForAbsoluteAngles:(id)arg1 scale:(double)arg2;
- (id)_renderBackgroundFramesForAbsoluteAngles:(id)arg1 lightingType:(long long)arg2 scale:(double)arg3;
- (long long)angleOfAvailableFrameForAngle:(long long)arg1;
- (id)_appearanceForLightingType:(long long)arg1;
- (id)_renderFrameForAngle:(long long)arg1 scale:(double)arg2 components:(long long)arg3 appearance:(id)arg4;
- (void)preloadForegroundFrames;
- (void)preloadBackgroundFrames;
- (id)foregroundFrameForAngle:(long long)arg1;
- (id)backgroundFrameForAngle:(long long)arg1 lightingType:(long long)arg2;
- (_Bool)_needsBackgroundFrame;

@end
