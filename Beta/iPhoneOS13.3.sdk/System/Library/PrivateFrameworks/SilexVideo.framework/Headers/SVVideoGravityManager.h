/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoGravityProviderFactory, SVVideoGravityProviding, SVVideoViewControllerProviding;

@interface SVVideoGravityManager : NSObject

{
    id <SVVideoGravityProviderFactory> _videoGravityProviderFactory;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
    id <SVVideoGravityProviding> _videoGravityProviderForCurrentVideo;
    id <SVVideoGravityProviding> _videoGravityProviderForTransitioningVideo;
}

@property (nonatomic, readonly) id <SVVideoGravityProviderFactory> videoGravityProviderFactory;
@property (nonatomic, readonly) id <SVVideoViewControllerProviding> videoViewControllerProvider;
@property (retain, nonatomic) id <SVVideoGravityProviding> videoGravityProviderForCurrentVideo;
@property (retain, nonatomic) id <SVVideoGravityProviding> videoGravityProviderForTransitioningVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithVideoGravityProviderFactory:(id)arg1 videoViewControllerProvider:(id)arg2;

@end
