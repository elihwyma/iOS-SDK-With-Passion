/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoPlaybackSkipping;

@interface SVSkipToPreviousInteractionHandler : NSObject

{
    id <SVVideoPlaybackSkipping> _playbackSkipper;
}

@property (nonatomic, readonly) id <SVVideoPlaybackSkipping> playbackSkipper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleInteractionWithContext:(id)arg1;
- (id)initWithPlaybackSkipper:(id)arg1;

@end
