/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/FxPinParameter.h>

@interface FxParameterPoint2d : FxPinParameter

{
    struct FxParameterPoint2dPriv *_point2dPriv;
}

- (id)init;
- (void)dealloc;
- (_Bool)isCanvasRelative;
- (void)setIsCanvasRelative:(_Bool)arg1;
- (_Bool)isTranslation;
- (void)setIsTranslation:(_Bool)arg1;

@end
