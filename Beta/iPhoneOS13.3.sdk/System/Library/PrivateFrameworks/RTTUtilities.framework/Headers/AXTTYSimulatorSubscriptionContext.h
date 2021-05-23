/*
 Image: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
 */

#import <CoreTelephony/CTXPCServiceSubscriptionContext.h>

@class NSUUID;

@interface AXTTYSimulatorSubscriptionContext : CTXPCServiceSubscriptionContext

{
    NSUUID *_testUuid;
}

@property (retain, nonatomic) NSUUID *testUuid;

- (id)init;
- (id)uuid;

@end
