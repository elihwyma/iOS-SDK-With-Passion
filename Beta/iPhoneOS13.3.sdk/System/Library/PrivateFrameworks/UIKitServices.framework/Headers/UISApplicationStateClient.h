/*
 Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection, NSString;

@protocol OS_dispatch_queue;

@interface UISApplicationStateClient : NSObject

{
    NSString *_bundleIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _queue_invalidated;
    BSServiceConnection *_queue_connection;
}

@property (copy, nonatomic) NSString *badgeValue;
@property (nonatomic) _Bool usesBackgroundNetwork;
@property (nonatomic) double nextWakeIntervalSinceReferenceDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)setMinimumBackgroundFetchInterval:(double)arg1;
- (id)_remoteTarget;

@end
