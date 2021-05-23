/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BackBoardServices/BKSTouchDeliveryPolicy.h>

@class NSObject;

@protocol OS_xpc_object;

@interface _BKSShareTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy

{
    unsigned int _childContextId;
    unsigned int _hostContextId;
    NSObject<OS_xpc_object> *_assertionEndpoint;
}

@property (nonatomic, readonly) unsigned int childContextId;
@property (nonatomic, readonly) unsigned int hostContextId;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAssertionEndpoint:(id)arg1;
- (id)matchSharingTouchesPolicy:(CDUnknownBlockType)arg1 orCancelTouchesPolicy:(CDUnknownBlockType)arg2 orCombinedPolicy:(CDUnknownBlockType)arg3;
- (id)assertionEndpoint;
- (id)initWithChildContextId:(unsigned int)arg1 hostContextId:(unsigned int)arg2;

@end
