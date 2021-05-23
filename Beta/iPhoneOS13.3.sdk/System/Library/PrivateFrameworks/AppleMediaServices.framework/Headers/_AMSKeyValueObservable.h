/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSObservable.h>

@class NSObject, NSString;

__attribute__((visibility("hidden")))
@interface _AMSKeyValueObservable : AMSObservable

{
    NSObject *_context;
    NSString *_keyPath;
    NSObject *_object;
}

@property (retain, nonatomic) NSObject *context;
@property (copy, nonatomic) NSString *keyPath;
@property (weak, nonatomic) NSObject *object;

- (_Bool)cancel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)sendCompletion;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3;

@end
