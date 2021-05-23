/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface BKSTouchDeliveryPolicyAssertion : NSObject

{
    NSObject<OS_xpc_object> *_listener;
}

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)endpoint;

@end
