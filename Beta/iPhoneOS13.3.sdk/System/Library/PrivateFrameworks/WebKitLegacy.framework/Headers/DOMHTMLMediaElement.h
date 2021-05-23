/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMMediaError, DOMTimeRanges, NSString;

@interface DOMHTMLMediaElement : DOMHTMLElement

@property (readonly) DOMMediaError *error;
@property (copy) NSString *src;
@property (copy, readonly) NSString *currentSrc;
@property (copy) NSString *crossOrigin;
@property (readonly) unsigned short networkState;
@property (copy) NSString *preload;
@property (readonly) DOMTimeRanges *buffered;
@property (readonly) unsigned short readyState;
@property (readonly) _Bool seeking;
@property double currentTime;
@property (readonly) double duration;
@property (readonly) _Bool paused;
@property double defaultPlaybackRate;
@property double playbackRate;
@property (readonly) DOMTimeRanges *played;
@property (readonly) DOMTimeRanges *seekable;
@property (readonly) _Bool ended;
@property _Bool autoplay;
@property _Bool loop;
@property _Bool controls;
@property double volume;
@property _Bool muted;
@property _Bool defaultMuted;
@property _Bool webkitPreservesPitch;
@property (readonly) _Bool webkitHasClosedCaptions;
@property _Bool webkitClosedCaptionsVisible;
@property (copy) NSString *mediaGroup;

- (void)load;
- (void)pause;
- (void)play;
- (id)canPlayType:(id)arg1;
- (double)getStartDate;
- (void)fastSeek:(double)arg1;

@end
