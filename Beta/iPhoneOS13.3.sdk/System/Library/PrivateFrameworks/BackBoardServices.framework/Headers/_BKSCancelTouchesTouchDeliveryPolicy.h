/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BackBoardServices/BKSTouchDeliveryPolicy.h>

@class NSObject;

@protocol OS_xpc_object;

@interface _BKSCancelTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy

{
    unsigned int _contextId;
    NSObject<OS_xpc_object> *_assertionEndpoint;
    double _initialTouchTimestamp;
}

@property (nonatomic, readonly) unsigned int contextId;
@property (nonatomic, readonly) double initialTouchTimestamp;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAssertionEndpoint:(id)arg1;
- (id)matchSharingTouchesPolicy:(CDUnknownBlockType)arg1 orCancelTouchesPolicy:(CDUnknownBlockType)arg2 orCombinedPolicy:(CDUnknownBlockType)arg3;
- (id)assertionEndpoint;
- (id)initWithContextId:(unsigned int)arg1 initialTouchTimestamp:(double)arg2;

@end
