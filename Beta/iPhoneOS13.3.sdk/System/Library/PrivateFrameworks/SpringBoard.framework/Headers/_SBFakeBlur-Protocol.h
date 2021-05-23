/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol _SBFakeBlurObserver;

@protocol _SBFakeBlur <Swift>

@property (weak, nonatomic) id <_SBFakeBlurObserver> observer;
@property (nonatomic) double zoomScale;
@property (nonatomic, getter=isFullscreen) _Bool fullscreen;
@property (nonatomic) unsigned long long transformOptions;

- (unsigned short)requestStyle: /* Error: Ran out of types for this method. */;
- (unsigned short)effectiveStyle;
- (unsigned short)offsetWallpaperBy: /* Error: Ran out of types for this method. */;

@end
