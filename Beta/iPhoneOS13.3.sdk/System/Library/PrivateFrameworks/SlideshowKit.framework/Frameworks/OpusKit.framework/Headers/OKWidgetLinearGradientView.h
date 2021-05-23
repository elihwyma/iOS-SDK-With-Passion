/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetView.h>

@class NSArray, OFLinearGradientView;

@interface OKWidgetLinearGradientView : OKWidgetView

{
    OFLinearGradientView *_gradientView;
    NSArray *_gradientColors;
    NSArray *_gradientLocations;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (void)dealloc;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (id)initWithWidget:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (void)setAntialiasing:(_Bool)arg1;
- (void)updateGradient;
- (id)settingGradientLocations;
- (void)setSettingGradientLocations:(id)arg1;
- (id)settingGradientColors;
- (void)setSettingGradientColors:(id)arg1;
- (_Bool)settingOpaque;
- (struct CGPoint)settingStartPoint;
- (void)setSettingStartPoint:(struct CGPoint)arg1;
- (struct CGPoint)settingEndPoint;
- (void)setSettingEndPoint:(struct CGPoint)arg1;
- (void)setSettingOpaque:(_Bool)arg1;

@end
