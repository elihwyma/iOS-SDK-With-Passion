/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SFContactInfo : NSObject

{
    NSString *_contactIdentifier;
    NSString *_emailAddress;
    NSString *_phoneNumber;
}

@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *phoneNumber;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
