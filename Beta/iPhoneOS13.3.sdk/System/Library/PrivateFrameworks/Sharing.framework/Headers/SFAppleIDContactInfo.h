/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SFAppleIDContactInfo : NSObject

{
    NSString *_firstName;
    NSString *_lastName;
    NSArray *_validatedEmailAddresses;
    NSArray *_validatedPhoneNumbers;
}

@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSArray *validatedEmailAddresses;
@property (retain, nonatomic) NSArray *validatedPhoneNumbers;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToContactInfo:(id)arg1;

@end
