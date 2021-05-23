/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CNObserver;

@interface _CNKeyValueObserverHandler : NSObject

{
    id _object;
    NSString *_keyPath;
    id <CNObserver> _observer;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObserving;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 observer:(id)arg3;
- (void)startObservingWithOptions:(unsigned long long)arg1;

@end
