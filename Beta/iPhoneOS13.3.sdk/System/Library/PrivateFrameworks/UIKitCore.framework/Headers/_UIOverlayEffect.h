/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIVisualEffect.h>

@class NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UIOverlayEffect : UIVisualEffect

{
    NSString *_filterType;
    UIImage *_image;
    UIColor *_color;
    double _alpha;
}

@property (copy, nonatomic) NSString *filterType;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) UIColor *color;
@property (nonatomic) double alpha;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;

@end
