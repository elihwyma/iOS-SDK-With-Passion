/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@class DNDModeAssertion, DNDModeAssertionInvalidationDetails, DNDModeAssertionSource, NSDate;

@interface DNDModeAssertionInvalidation : NSObject

{
    DNDModeAssertion *_assertion;
    NSDate *_invalidationDate;
    DNDModeAssertionInvalidationDetails *_details;
    DNDModeAssertionSource *_source;
    unsigned long long _reason;
    unsigned long long _reasonOverride;
}

@property (copy, nonatomic, readonly) DNDModeAssertionSource *source;
@property (copy, nonatomic, readonly) DNDModeAssertionInvalidationDetails *details;
@property (nonatomic, readonly) unsigned long long reasonOverride;
@property (copy, nonatomic, readonly) DNDModeAssertion *assertion;
@property (copy, nonatomic, readonly) NSDate *invalidationDate;
@property (nonatomic, readonly) unsigned long long reason;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAssertion:(id)arg1 invalidationDate:(id)arg2 details:(id)arg3 source:(id)arg4 reason:(unsigned long long)arg5 reasonOverride:(unsigned long long)arg6;

@end
