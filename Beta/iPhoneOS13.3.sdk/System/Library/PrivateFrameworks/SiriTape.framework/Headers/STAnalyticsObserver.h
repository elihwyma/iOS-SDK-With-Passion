/*
 Image: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
 */

#import <Foundation/NSObject.h>

@class AFAnalyticsObserverConnection, NSMutableDictionary;

@interface STAnalyticsObserver : NSObject

{
    AFAnalyticsObserverConnection *_connection;
    NSMutableDictionary *_observerActions;
}

+ (id)sharedObserver;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)addObserverActionForType:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
