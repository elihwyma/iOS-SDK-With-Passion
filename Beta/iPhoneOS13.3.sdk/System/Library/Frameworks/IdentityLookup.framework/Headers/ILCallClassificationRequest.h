/*
 Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

#import <IdentityLookup/ILClassificationRequest.h>

@class NSArray;

@interface ILCallClassificationRequest : ILClassificationRequest

{
    NSArray *_callCommunications;
}

@property (copy, nonatomic, readonly) NSArray *callCommunications;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToRequest:(id)arg1;
- (id)initWithCallCommunications:(id)arg1;

@end
