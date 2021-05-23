/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPResponse.h>

@class MPCMediaRemoteController, MPSectionedCollection;

@protocol MPCPlayerSessionResponseBuilder;

@interface MPCPlayerSessionResponse : MPResponse

{
    MPSectionedCollection *_items;
    MPCMediaRemoteController *_controller;
}

@property (nonatomic, readonly) id <MPCPlayerSessionResponseBuilder> builder;
@property (nonatomic, readonly) MPCMediaRemoteController *controller;
@property (nonatomic, readonly) MPSectionedCollection *items;

+ (id)builderProtocol;

- (id)initWithRequest:(id)arg1 middleware:(id)arg2;

@end
