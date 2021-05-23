/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

#import <BackBoardServices/Swift-Protocol.h>

@class NSMutableSet, NSSet, NSString;

@protocol OS_dispatch_queue, _BKSHIDEventRouterDelegate;

@interface BKSHIDEventRouter : NSObject <Swift>

{
    long long _destination;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_queue_hidEventDescriptors;
    id <_BKSHIDEventRouterDelegate> _queue_delegate;
    NSSet *_queue_cachedHidEventDescriptors;
}

@property (readonly) long long destination;
@property (copy, readonly) NSSet *hidEventDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)routerWithDestination:(long long)arg1;
+ (id)defaultEventRouters;
+ (id)defaultSystemAppEventRouter;
+ (id)defaultFocusedAppEventRouter;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_setDelegate:(id)arg1;
- (id)_initWithDestination:(long long)arg1 hidEventDescriptors:(id)arg2;
- (void)addHIDEventDescriptors:(id)arg1;
- (void)removeHIDEventDescriptors:(id)arg1;
- (_Bool)specifiesDescriptor:(id)arg1;
- (_Bool)containsDescriptor:(id)arg1;

@end
