/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDataCollectionObserverState;

@interface _HDDataCollectionObserverWrapper : NSObject

{
    id _observer;
    HDDataCollectionObserverState *_state;
    double _collectionInterval;
}

@property (weak, nonatomic, readonly) id observer;
@property (copy, nonatomic) HDDataCollectionObserverState *state;
@property (nonatomic) double collectionInterval;

- (id)description;
- (id)initWithObserver:(id)arg1 state:(id)arg2 collectionInterval:(double)arg3;

@end
