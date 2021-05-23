/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class CXCallObserver;

__attribute__((visibility("hidden")))
@interface MNPhoneCallObserver : NSObject

{
    CXCallObserver *_observer;
}

+ (id)sharedPhoneCallObserver;

- (id)init;
- (void)dealloc;
- (void)_startObserving;
- (_Bool)hasActiveCalls;
- (_Bool)_isActiveCall:(id)arg1;

@end
