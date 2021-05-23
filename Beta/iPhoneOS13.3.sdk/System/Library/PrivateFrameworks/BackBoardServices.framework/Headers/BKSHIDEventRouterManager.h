/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

#import <BackBoardServices/Swift-Protocol.h>

@class BKSHIDEventDeliveryManager, NSArray, NSMutableArray, NSString;

@protocol BSInvalidatable, OS_dispatch_queue;

@interface BKSHIDEventRouterManager : NSObject <Swift>

{
    BKSHIDEventDeliveryManager *_deliveryManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_routers;
    _Bool _queue_needsFlush;
    id <BSInvalidatable> _queue_dispatchingRulesAssertion;
}

@property (retain, nonatomic) NSArray *eventRouters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_queue_routerDidChange:(id)arg1;
- (id)_initWithDeliveryManager:(id)arg1;
- (id)_targetForDestination:(long long)arg1;
- (void)_queue_flush;
- (id)_queue_succinctDescriptionBuilder;

@end
