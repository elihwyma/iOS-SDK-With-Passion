/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <CALayer.h>

@class AVPresentationContainerViewAppearanceProxy;

__attribute__((visibility("hidden")))
@interface AVPresentationContainerViewLayer : CALayer

{
    _Bool _wantsAppearanceConfigValues;
    AVPresentationContainerViewAppearanceProxy *_appearanceProxy;
}

@property (nonatomic, readonly) AVPresentationContainerViewAppearanceProxy *appearanceProxy;
@property (nonatomic) _Bool wantsAppearanceConfigValues;

- (void)setCornerRadius:(double)arg1;
- (void)setMasksToBounds:(_Bool)arg1;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (void)setCornerCurve:(id)arg1;
- (double)cornerRadius;
- (id)cornerCurve;
- (_Bool)masksToBounds;
- (unsigned long long)maskedCorners;
- (void)setContinuousCorners:(_Bool)arg1;
- (_Bool)continuousCorners;

@end
