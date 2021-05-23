/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate;

@interface SXAutomaticFullscreenVideoPlaybackBehaviorManager : NSObject

{
    unsigned long long _behavior;
    id <SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate> _delegate;
    struct CGRect _videoBounds;
}

@property (nonatomic) struct CGRect videoBounds;
@property (nonatomic) unsigned long long behavior;
@property (weak, nonatomic) id <SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)conditionsChanged;
- (void)playbackCoordinatorStartedPlayback:(id)arg1;
- (void)playbackCoordinatorResumedPlayback:(id)arg1;
- (_Bool)fullscreenPlaybackRequiredForCurrentConditions;

@end
