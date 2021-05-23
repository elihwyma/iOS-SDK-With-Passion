/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

#import <SilexVideo/Swift-Protocol.h>

@class NSString;

@protocol SVVideoPlaybackController, SVVideoProviderProviding;

@interface SVPrivacyStatementInteractionHandlerFactory : NSObject <Swift>

{
    id <SVVideoProviderProviding> _videoProviderProviding;
    id <SVVideoPlaybackController> _playbackController;
}

@property (nonatomic, readonly) id <SVVideoProviderProviding> videoProviderProviding;
@property (nonatomic, readonly) id <SVVideoPlaybackController> playbackController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithVideoProviderProviding:(id)arg1 playbackController:(id)arg2;

@end
