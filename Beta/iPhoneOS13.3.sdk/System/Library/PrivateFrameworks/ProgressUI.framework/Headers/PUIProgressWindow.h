/*
 Image: /System/Library/PrivateFrameworks/ProgressUI.framework/ProgressUI
 */

#import <Foundation/NSObject.h>

@class CAContext, CALayer, NSString;

@interface PUIProgressWindow : NSObject

{
    _Bool _weCreatedTheContext;
    CAContext *_context;
    int _deviceClass;
    int _screenClass;
    struct CGSize _displaySize;
    struct CGSize _framebufferSize;
    struct CGSize _layerPositioningSize;
    float _displayScale;
    float _displayOrientation;
    _Bool _sideways;
    _Bool _renderWithIOSurface;
    id _framebufferListenerToken;
    float _currentProgress;
    struct CGImage *_appleLogo;
    double _progressXDelta;
    double _progressYDelta;
    double _progressWidth;
    _Bool _forceInverted;
    _Bool _white;
    _Bool _showsProgressBar;
    CALayer *_progressLayer;
    struct __IOSurface *_ioSurface;
    CALayer *_ioSurfaceLayer;
    CALayer *_layer;
}

@property (nonatomic, readonly) CALayer *layer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_usesPreBoardAppearance;
+ (void)setUsesPreBoardAppearance;

- (id)init;
- (void)dealloc;
- (void)setVisible:(_Bool)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)initWithProgressBarVisibility:(_Bool)arg1 createContext:(_Bool)arg2 contextLevel:(float)arg3 appearance:(long long)arg4;
- (void)setProgressValue:(float)arg1;
- (id)initWithProgressBarVisibility:(_Bool)arg1 level:(float)arg2 forceInverted:(_Bool)arg3;
- (id)initWithOptions:(unsigned long long)arg1 contextLevel:(float)arg2 appearance:(long long)arg3;
- (void)_collectDisplayInfo;
- (void)_createContext;
- (void)_createLayer;
- (void)_updateLayerForFramebufferSize:(struct CGSize)arg1;
- (void)_layoutScreen;
- (void)_updateIOSurface;
- (unsigned long long)_nanoDeviceType;
- (struct CGImage *)_createImageWithName:(const char *)arg1 scale:(int)arg2 displayHeight:(int)arg3;
- (_Bool)_isNano;
- (void)_drawProgressLayerInContext:(struct CGContext *)arg1;
- (const char *)_productSuffix;
- (const char *)_appleTVProductSuffix;
- (id)initWithForceInverted:(_Bool)arg1;
- (id)initWithProgressBarVisibility:(_Bool)arg1;
- (id)initWithProgressBarVisibility:(_Bool)arg1 level:(float)arg2;
- (id)initWithProgressBarVisibility:(_Bool)arg1 context:(id)arg2;
- (int)_nanoMaterial;

@end
