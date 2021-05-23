/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@class DNDModeAssertionDetails, DNDModeAssertionSource, NSDate, NSUUID;

@interface DNDModeAssertion : NSObject

{
    NSUUID *_UUID;
    NSDate *_startDate;
    DNDModeAssertionDetails *_details;
    DNDModeAssertionSource *_source;
}

@property (copy, nonatomic, readonly) NSUUID *UUID;
@property (copy, nonatomic, readonly) NSDate *startDate;
@property (copy, nonatomic, readonly) DNDModeAssertionDetails *details;
@property (copy, nonatomic, readonly) DNDModeAssertionSource *source;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 startDate:(id)arg2 details:(id)arg3 source:(id)arg4;

@end
