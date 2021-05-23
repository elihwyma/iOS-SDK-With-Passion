/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@interface CTCellularData : NSObject

{
    struct network_usage_policy_client_s *_cuPolicyClient;
    struct queue _cuPolicyClientQueue;
    unsigned long long _restrictedState;
    CDUnknownBlockType _cellularDataRestrictionDidUpdateNotifier;
}

@property (copy) CDUnknownBlockType cellularDataRestrictionDidUpdateNotifier;
@property (nonatomic, readonly) unsigned long long restrictedState;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)setCellularDataRestrictionStateFromPolicies:(void *)arg1;

@end
