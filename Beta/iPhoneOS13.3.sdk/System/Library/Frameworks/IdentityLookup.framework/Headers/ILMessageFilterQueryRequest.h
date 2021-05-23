/*
 Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ILMessageFilterQueryRequest : NSObject

{
    NSString *_sender;
    NSString *_messageBody;
    NSString *_extensionIdentifier;
}

@property (copy, nonatomic, readonly) NSString *extensionIdentifier;
@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSString *messageBody;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionIdentifier:(id)arg1;
- (_Bool)isEqualToRequest:(id)arg1;

@end
