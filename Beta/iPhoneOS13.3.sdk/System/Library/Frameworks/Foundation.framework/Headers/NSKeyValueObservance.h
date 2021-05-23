/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSKeyValueProperty;

__attribute__((visibility("hidden")))
@interface NSKeyValueObservance : NSObject

{
    NSObject *_observer;
    NSKeyValueProperty *_property;
    void *_context;
    NSObject *_originalObservable;
    unsigned int _options:7;
    unsigned int _cachedIsShareable:1;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithObserver:(id)arg1 property:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4 originalObservable:(id)arg5;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
