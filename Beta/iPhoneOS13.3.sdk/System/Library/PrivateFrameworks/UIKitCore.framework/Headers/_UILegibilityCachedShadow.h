/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIImage, _UILegibilitySettings;

__attribute__((visibility("hidden")))
@interface _UILegibilityCachedShadow : NSObject

{
    _UILegibilitySettings *_settings;
    double _strength;
    UIImage *_shadow;
}

@property (retain, nonatomic) _UILegibilitySettings *settings;
@property (nonatomic) double strength;
@property (retain, nonatomic) UIImage *shadow;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)matchesSettings:(id)arg1 strength:(double)arg2;

@end
