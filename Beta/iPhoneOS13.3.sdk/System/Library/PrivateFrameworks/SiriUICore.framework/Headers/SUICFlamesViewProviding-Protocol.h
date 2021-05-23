/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <SiriUICore/Swift-Protocol.h>

@class UIColor, UIImage;

@protocol SUICFlamesViewProvidingDelegate;

@protocol SUICFlamesViewProviding <Swift>

@property (nonatomic, readonly) _Bool isRenderingEnabled;
@property (weak, nonatomic) id <SUICFlamesViewProvidingDelegate> flamesDelegate;
@property (nonatomic) long long mode;
@property (nonatomic) long long state;
@property (nonatomic) _Bool showAura;
@property (nonatomic) _Bool freezesAura;
@property (nonatomic) _Bool reduceFrameRate;
@property (nonatomic) _Bool reduceThinkingFramerate;
@property (nonatomic) struct CGRect activeFrame;
@property (retain, nonatomic) UIImage *overlayImage;
@property (retain, nonatomic) UIColor *dictationColor;
@property (nonatomic) _Bool renderInBackground;
@property (nonatomic) _Bool flamesPaused;
@property (nonatomic) double horizontalScaleFactor;
@property (nonatomic) _Bool accelerateTransitions;

- (unsigned short)resetAndReinitialize: /* Error: Ran out of types for this method. */;
- (unsigned short)setRenderingEnabled:forReason: /* Error: Ran out of types for this method. */;
- (unsigned short)prewarmShadersForCurrentMode;
- (unsigned short)fadeOutCurrentAura;

@end
