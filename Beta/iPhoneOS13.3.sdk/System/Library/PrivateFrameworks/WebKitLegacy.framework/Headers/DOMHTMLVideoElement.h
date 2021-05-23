/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMHTMLMediaElement.h>

@class NSString;

@interface DOMHTMLVideoElement : DOMHTMLMediaElement

@property unsigned int width;
@property unsigned int height;
@property (readonly) unsigned int videoWidth;
@property (readonly) unsigned int videoHeight;
@property (copy) NSString *poster;
@property _Bool playsInline;
@property (readonly) _Bool webkitSupportsFullscreen;
@property (readonly) _Bool webkitDisplayingFullscreen;

- (void)webkitExitFullscreen;
- (void)webkitEnterFullscreen;
- (void)webkitEnterFullScreen;
- (void)webkitExitFullScreen;

@end
