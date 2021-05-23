/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient;

@interface CTCellularPlanProvisioning : NSObject

{
    CoreTelephonyClient *_client;
}

- (id)init;
- (_Bool)supportsCellularPlan;
- (void)addPlanWith:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
