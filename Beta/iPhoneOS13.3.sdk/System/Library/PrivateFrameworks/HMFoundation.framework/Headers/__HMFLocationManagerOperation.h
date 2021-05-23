/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/HMFOperation.h>

@class CLLocationManager, HMFLocationAuthorization, NSString;

@protocol HMFLocking;

__attribute__((visibility("hidden")))
@interface __HMFLocationManagerOperation : HMFOperation

{
    id <HMFLocking> _lock;
    _Bool _ready;
    CLLocationManager *_manager;
    HMFLocationAuthorization *_authorization;
}

@property (readonly) HMFLocationAuthorization *authorization;
@property (readonly) CLLocationManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)logCategory;

- (void)dealloc;
- (void)main;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)isReady;
- (id)initWithTimeout:(double)arg1;
- (id)initWithAuthorization:(id)arg1;

@end
