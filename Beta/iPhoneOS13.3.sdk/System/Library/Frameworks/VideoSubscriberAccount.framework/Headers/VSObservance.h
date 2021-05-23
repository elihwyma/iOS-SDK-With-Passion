/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol VSObservanceDelegate;

__attribute__((visibility("hidden")))
@interface VSObservance : NSObject

{
    _Bool _observing;
    id _object;
    NSString *_keyPath;
    unsigned long long _options;
    id <VSObservanceDelegate> _delegate;
}

@property (nonatomic, getter=isObserving) _Bool observing;
@property (nonatomic, readonly) id object;
@property (copy, nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) unsigned long long options;
@property (weak, nonatomic) id <VSObservanceDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startObserving;
- (void)stopObserving;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3;

@end
