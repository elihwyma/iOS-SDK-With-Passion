/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSDate, NSUUID;

@interface HMHomeInvitationData : NSObject <Swift>

{
    NSUUID *_identifier;
    NSDate *_startDate;
    NSDate *_endDate;
    long long _invitationState;
}

@property (copy, nonatomic, readonly) NSUUID *identifier;
@property (copy, nonatomic, readonly) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) long long invitationState;

+ (_Bool)supportsSecureCoding;
+ (id)homeInvitationStateDescription:(long long)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvitationState:(long long)arg1 invitationIdentifier:(id)arg2 expiryDate:(id)arg3;

@end
