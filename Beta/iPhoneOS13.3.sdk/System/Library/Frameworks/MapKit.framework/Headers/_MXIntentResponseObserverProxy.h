/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol _MXIntentResponseObserver;

__attribute__((visibility("hidden")))
@interface _MXIntentResponseObserverProxy : NSObject

{
    id <_MXIntentResponseObserver> _observer;
}

@property (weak, nonatomic) id <_MXIntentResponseObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)stopObserving;
- (id)initWithObserver:(id)arg1;
- (void)intentResponseDidUpdate:(id)arg1;
- (void)intentResponseDidUpdate:(id)arg1 withSerializedCacheItems:(id)arg2;
- (void)didReceiveError:(id)arg1;

@end
