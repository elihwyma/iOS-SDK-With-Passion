/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/FxPinParameter.h>

@interface FxParameterColor : FxPinParameter

{
    struct FxParameterColorPriv *_colorPriv;
}

- (id)init;
- (void)dealloc;
- (void)setHasAlpha:(_Bool)arg1;
- (_Bool)hasAlpha;

@end
