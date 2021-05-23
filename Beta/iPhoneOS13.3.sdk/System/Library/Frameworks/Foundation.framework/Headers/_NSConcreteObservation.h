/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObservation.h>

@class NSObject;

@protocol NSObservable, NSObserver;

__attribute__((visibility("hidden")))
@interface _NSConcreteObservation : NSObservation

{
    NSObject<NSObservable> *_LHSobservable;
    NSObject<NSObserver> *_RHSobserver;
    id _observers[4];
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (void)_receiveBox:(id)arg1;
- (void)finishObserving;
- (void)remove;
- (id)initWithObservable:(id)arg1 observer:(id)arg2;
- (void *)_observerStorageOfSize:(unsigned long long)arg1;

@end
