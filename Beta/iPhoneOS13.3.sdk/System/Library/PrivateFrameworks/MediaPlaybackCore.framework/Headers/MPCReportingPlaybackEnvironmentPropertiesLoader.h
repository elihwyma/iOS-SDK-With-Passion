/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCPlaybackRequestEnvironment, NSString;

@interface MPCReportingPlaybackEnvironmentPropertiesLoader : NSObject

{
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
}

@property (copy, nonatomic, readonly) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithPlaybackRequestEnvironment:(id)arg1;
- (void)loadReportingIdentityPropertiesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getHasSubscriptionPlaybackCapabilityForUserIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
