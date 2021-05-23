/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/FxPin.h>

@interface FxPinParameter : FxPin

{
    id defaultValue;
    Class customUI;
    struct FxPinParameterPriv *_paramPriv;
}

- (id)init;
- (void)dealloc;
- (id)defaultValue;
- (void)setDefaultValue:(id)arg1;
- (Class)customPinControl;
- (void)setCustomPinControl:(Class)arg1;

@end
