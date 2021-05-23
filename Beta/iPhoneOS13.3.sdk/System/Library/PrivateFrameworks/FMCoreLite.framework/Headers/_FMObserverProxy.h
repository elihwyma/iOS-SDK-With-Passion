/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _FMObserverProxy : NSObject

{
    _Bool _valid;
    id _weakObserver;
}

@property (weak, nonatomic, readonly) id weakObserver;
@property (nonatomic, readonly, getter=isValid) _Bool valid;

- (void)dealloc;
- (void)invalidate;
- (id)initWithWeakObserver:(id)arg1;

@end
