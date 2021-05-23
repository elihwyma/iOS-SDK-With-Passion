/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIVisualEffect.h>

__attribute__((visibility("hidden")))
@interface _UIZoomEffect : UIVisualEffect

{
    double _zoomAmount;
    _Bool _isUnderlay;
}

+ (_Bool)supportsSecureCoding;
+ (id)zoomEffectWithMagnitude:(double)arg1;
+ (id)_underlayZoomEffectWithMagnitude:(double)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (id)_viewEntry;

@end
