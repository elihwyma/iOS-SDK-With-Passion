/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface BKSTouchDeliveryPolicy : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *assertionEndpoint;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)policyRequiringSharingOfTouchesDeliveredToChildContextId:(unsigned int)arg1 withHostContextId:(unsigned int)arg2;
+ (id)policyCancelingTouchesDeliveredToContextId:(unsigned int)arg1 withInitialTouchTimestamp:(double)arg2;
+ (id)policyByCombiningPolicies:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)matchSharingTouchesPolicy:(CDUnknownBlockType)arg1 orCancelTouchesPolicy:(CDUnknownBlockType)arg2 orCombinedPolicy:(CDUnknownBlockType)arg3;
- (id)policyByMappingContainedPoliciesWithBlock:(CDUnknownBlockType)arg1;
- (id)reducePolicyToObjectWithBlock:(CDUnknownBlockType)arg1;
- (id)policyIncludingPolicy:(id)arg1;
- (id)policyExcludingPolicy:(id)arg1;

@end
