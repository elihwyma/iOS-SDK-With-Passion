/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QLWaveformScrubberViewProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)generateWaveformForWidth:(double)arg1 asset:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;

- (id)createFilmstripViewForVideoScrubberView:(id)arg1;

@end
