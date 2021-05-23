/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/_NSObservableObservation.h>

@class NSObservableKeyPath;

__attribute__((visibility("hidden")))
@interface _NSObservableKVO1Adaptor : _NSObservableObservation

{
    NSObservableKeyPath *kp;
    _Bool emitsChanges;
}

- (_Bool)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void *)arg7;
- (void)finishObserving;
- (void)remove;
- (id)initWithObservable:(id)arg1 observer:(id)arg2 keyPath:(id)arg3;
- (void)_setEmitsChanges:(_Bool)arg1;

@end
