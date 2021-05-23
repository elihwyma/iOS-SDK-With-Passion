/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CALayer.h>

@class NSDictionary;

@interface CAEAGLLayer : CALayer

{
    struct _CAEAGLNativeWindow *_win;
}

@property (readonly) struct _EAGLNativeWindowObject *nativeWindow;
@property (getter=isAsynchronous) _Bool asynchronous;
@property unsigned long long maximumDrawableCount;
@property _Bool lowLatency;
@property double inputTime;
@property double drawableTimeoutSeconds;
@property _Bool presentsWithTransaction;
@property (copy) NSDictionary *drawableProperties;

+ (id)defaultValueForKey:(id)arg1;
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;

- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (void)_display;
- (_Bool)shouldArchiveValueForKey:(id)arg1;
- (void)layerDidBecomeVisible:(_Bool)arg1;
- (_Bool)_defersDidBecomeVisiblePostCommit;
- (void)_didCommitLayer:(struct Transaction *)arg1;
- (_Bool)isDrawableAvailableInternal;
- (_Bool)isDrawableAvailable;
- (void)discardContents;

@end
