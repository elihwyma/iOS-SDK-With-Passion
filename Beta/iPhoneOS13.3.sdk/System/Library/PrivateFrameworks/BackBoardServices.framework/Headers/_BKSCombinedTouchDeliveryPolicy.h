/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BackBoardServices/BKSTouchDeliveryPolicy.h>

@class NSArray;

@interface _BKSCombinedTouchDeliveryPolicy : BKSTouchDeliveryPolicy

{
    NSArray *_policies;
}

@property (nonatomic, readonly) NSArray *policies;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAssertionEndpoint:(id)arg1;
- (id)matchSharingTouchesPolicy:(CDUnknownBlockType)arg1 orCancelTouchesPolicy:(CDUnknownBlockType)arg2 orCombinedPolicy:(CDUnknownBlockType)arg3;
- (id)assertionEndpoint;
- (id)initWithPolicies:(id)arg1;

@end
