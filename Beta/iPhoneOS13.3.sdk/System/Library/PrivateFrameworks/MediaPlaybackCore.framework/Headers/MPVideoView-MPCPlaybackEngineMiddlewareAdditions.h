/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPVideoView.h>

@class AVPlayerLayer, NSString;

@interface MPVideoView (MPCPlaybackEngineMiddlewareAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isReadyForDisplay) _Bool readyForDisplay;
@property (nonatomic, readonly) struct CGSize preferredContentSize;
@property (copy, nonatomic) NSString *videoGravity;
@property (nonatomic, readonly) AVPlayerLayer *playerLayer;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingPreferredContentSize;

@end
