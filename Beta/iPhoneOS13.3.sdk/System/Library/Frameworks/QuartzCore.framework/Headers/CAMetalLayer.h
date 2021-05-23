/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CALayer.h>

@protocol MTLDevice;

@interface CAMetalLayer : CALayer

{
    struct _CAMetalLayerPrivate *_priv;
}

@property _Bool fenceEnabled;
@property _Bool serverSyncEnabled;
@property _Bool lowLatency;
@property _Bool exclusiveMode;
@property double inputTime;
@property _Bool nonDefaultColorspace;
@property double drawableTimeoutSeconds;
@property (readonly) unsigned long long displayCompositingInternalStatus;
@property (retain) id <MTLDevice> device;
@property (readonly) id <MTLDevice> preferredDevice;
@property unsigned long long pixelFormat;
@property _Bool framebufferOnly;
@property struct CGSize drawableSize;
@property unsigned long long maximumDrawableCount;
@property _Bool presentsWithTransaction;
@property struct CGColorSpace *colorspace;
@property _Bool allowsNextDrawableTimeout;

+ (id)defaultValueForKey:(id)arg1;
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;

- (id)init;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (void)setContents:(id)arg1;
- (void)_display;
- (_Bool)shouldArchiveValueForKey:(id)arg1;
- (void)layerDidBecomeVisible:(_Bool)arg1;
- (void)_didCommitLayer:(struct Transaction *)arg1;
- (_Bool)isDrawableAvailable;
- (void)discardContents;
- (void)setColorspace:(struct CGColorSpace *)arg1 nonDefault:(_Bool)arg2;
- (id)nextDrawable;
- (id)newDrawable;
- (_Bool)displaySyncEnabled;
- (void)setDisplaySyncEnabled:(_Bool)arg1;
- (void)removeBackBuffers;

@end
