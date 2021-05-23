/*
 Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

#import <IdentityLookup/ILCommunication.h>

@class NSString;

@interface ILMessageCommunication : ILCommunication

{
    NSString *_messageBody;
}

@property (copy, nonatomic, readonly) NSString *messageBody;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSender:(id)arg1 dateReceived:(id)arg2 messageBody:(id)arg3;
- (_Bool)isEqualToMessageCommunication:(id)arg1;

@end
