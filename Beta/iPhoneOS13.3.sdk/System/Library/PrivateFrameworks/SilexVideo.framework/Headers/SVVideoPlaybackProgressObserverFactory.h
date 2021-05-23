/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoDurationObserverFactory, SVVideoPeriodicTimeObserverFactory;

@interface SVVideoPlaybackProgressObserverFactory : NSObject

{
    id <SVVideoPeriodicTimeObserverFactory> _periodicTimeObserverFactory;
    id <SVVideoDurationObserverFactory> _durationObserverFactory;
}

@property (nonatomic, readonly) id <SVVideoPeriodicTimeObserverFactory> periodicTimeObserverFactory;
@property (nonatomic, readonly) id <SVVideoDurationObserverFactory> durationObserverFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createPlaybackProgressObserverForVideo:(id)arg1;
- (id)initWithPeriodicTimeObserverFactory:(id)arg1 durationObserverFactory:(id)arg2;

@end
