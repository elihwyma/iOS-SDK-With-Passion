/*
 Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

#import <IdentityLookup/ILClassificationRequest.h>

@class NSArray;

@interface ILMessageClassificationRequest : ILClassificationRequest

{
    NSArray *_messageCommunications;
}

@property (copy, nonatomic, readonly) NSArray *messageCommunications;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageCommunications:(id)arg1;
- (_Bool)isEqualToRequest:(id)arg1;

@end
