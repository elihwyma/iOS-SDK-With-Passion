/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVScrubbingPolicyHandling, SVVideoViewControllerProviding;

@interface SVScrubbingManager : NSObject

{
    id <SVScrubbingPolicyHandling> _policyHandler;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
}

@property (nonatomic, readonly) id <SVScrubbingPolicyHandling> policyHandler;
@property (nonatomic, readonly) id <SVVideoViewControllerProviding> videoViewControllerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithPolicyHandler:(id)arg1 videoViewControllerProvider:(id)arg2;

@end
