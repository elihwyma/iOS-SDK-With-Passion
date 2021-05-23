/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol SVPrefetcherFactory, SVVideoQueueObserving, SVVideoQueueProviding;

@interface SVPrefetchManager : NSObject

{
    id <SVVideoQueueProviding> _queueProvider;
    id <SVVideoQueueObserving> _queueObserver;
    id <SVPrefetcherFactory> _prefetcherFactory;
    NSMutableDictionary *_prefetchers;
}

@property (nonatomic, readonly) id <SVVideoQueueProviding> queueProvider;
@property (nonatomic, readonly) id <SVVideoQueueObserving> queueObserver;
@property (nonatomic, readonly) id <SVPrefetcherFactory> prefetcherFactory;
@property (nonatomic, readonly) NSMutableDictionary *prefetchers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)createPrefetcherForVideo:(id)arg1 afterVideo:(id)arg2;
- (id)initWithPrefetcherFactory:(id)arg1 queueProvider:(id)arg2 queueObserver:(id)arg3;
- (void)updatePrefetchersWithCurrentVideo:(id)arg1;

@end
