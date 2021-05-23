/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUINowPlayingObservation : NSObject

{
    _Bool _playing;
    NSString *_nowPlayingAppBundleIdentifier;
}

@property (nonatomic, getter=isPlaying) _Bool playing;
@property (copy, nonatomic) NSString *nowPlayingAppBundleIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithBundleIdentifier:(id)arg1 isPlaying:(_Bool)arg2;

@end
