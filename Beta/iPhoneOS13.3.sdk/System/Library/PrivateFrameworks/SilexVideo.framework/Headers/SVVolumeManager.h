/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoVolumeObserverFactory, SVVideoVolumeObserving, SVVolumeReporting;

@interface SVVolumeManager : NSObject

{
    id <SVVolumeReporting> _volumeReporter;
    id <SVVideoVolumeObserverFactory> _volumeObserverFactory;
    id <SVVideoVolumeObserving> _volumeObserver;
}

@property (nonatomic, readonly) id <SVVolumeReporting> volumeReporter;
@property (nonatomic, readonly) id <SVVideoVolumeObserverFactory> volumeObserverFactory;
@property (retain, nonatomic) id <SVVideoVolumeObserving> volumeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithVolumeReporter:(id)arg1 volumeObserverFactory:(id)arg2;

@end
