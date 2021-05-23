/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableString, NSURL;

@interface HMCameraClipVideoHLSPlaylistGenerator : NSObject

{
    NSMutableString *_hlsPlaylistString;
    NSURL *_url;
}

@property (readonly) NSMutableString *hlsPlaylistString;
@property (copy, readonly) NSURL *url;
@property (copy, readonly) NSData *hlsPlaylist;

+ (id)_hlsPlaylistEncryptionMethodNameForScheme:(unsigned long long)arg1;

- (void)finish;
- (void)addSegment:(id)arg1;
- (id)initWithClip:(id)arg1 url:(id)arg2;
- (void)addSegments:(id)arg1;

@end
