/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPSectionedCollection;

@interface MPCModelRadioGetTracksResponse : NSObject

{
    long long _tracklistAction;
    MPSectionedCollection *_tracks;
}

@property (nonatomic, readonly) long long tracklistAction;
@property (copy, nonatomic, readonly) MPSectionedCollection *tracks;

- (id)initWithTracks:(id)arg1 tracklistAction:(long long)arg2;

@end
