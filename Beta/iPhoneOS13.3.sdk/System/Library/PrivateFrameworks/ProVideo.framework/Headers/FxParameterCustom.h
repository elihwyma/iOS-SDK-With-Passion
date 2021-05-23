/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/FxPinParameter.h>

@interface FxParameterCustom : FxPinParameter

{
    struct FxParameterCustomPriv *_customPriv;
}

- (id)init;
- (void)dealloc;
- (id)dataFromValue:(id)arg1;
- (id)valueFromData:(id)arg1;

@end
