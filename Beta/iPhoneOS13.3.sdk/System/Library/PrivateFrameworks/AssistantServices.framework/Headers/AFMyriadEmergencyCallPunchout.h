/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface AFMyriadEmergencyCallPunchout : NSObject

{
    NSObject<OS_dispatch_queue> *_myriadEmergencyCallingQueue;
}

- (id)init;
- (void)initiateEmergencyCallMyriad;

@end
