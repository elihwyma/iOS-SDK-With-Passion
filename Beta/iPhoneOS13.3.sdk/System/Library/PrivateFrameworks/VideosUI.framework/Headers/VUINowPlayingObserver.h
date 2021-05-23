/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class VUINowPlayingObservation;

@protocol OS_dispatch_queue, VUINowPlayingObserverDelegate;

__attribute__((visibility("hidden")))
@interface VUINowPlayingObserver : NSObject

{
    _Bool _observing;
    VUINowPlayingObservation *_latestObservation;
    id <VUINowPlayingObserverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
    unsigned long long _updateObservationContext;
}

@property (retain, nonatomic) VUINowPlayingObservation *latestObservation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (nonatomic, getter=isObserving) _Bool observing;
@property (nonatomic) unsigned long long updateObservationContext;
@property (weak, nonatomic) id <VUINowPlayingObserverDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)startObserving;
- (void)stopObserving;
- (void)_stopObserving;
- (void)_startObserving;
- (void)_updateLatestObservation;
- (void)_notifyDelegateLatestObservationDidChange:(id)arg1;
- (void)_handleNowPlayingAppDidChangeNotification:(id)arg1;
- (void)_handleNowPlayingAppIsPlayingDidChangeNotification:(id)arg1;
- (void)_updateLatestObservationWithBundleIdentifier:(id)arg1 playbackState:(unsigned int)arg2;

@end
