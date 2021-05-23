/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideo, SVVideoEventTrackerProviding;

@interface SVVideoVolumeEventTrackerManager : NSObject

{
    id <SVVideoEventTrackerProviding> _eventTrackerProvider;
    id <SVVideo> _video;
}

@property (nonatomic, readonly) id <SVVideoEventTrackerProviding> eventTrackerProvider;
@property (retain, nonatomic) id <SVVideo> video;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)muteStateChanged:(id)arg1;
- (id)initWithEventTrackerProvider:(id)arg1;

@end
