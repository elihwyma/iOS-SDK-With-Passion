/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class CNPhoneNumber, CNPostalAddress, NSPersonNameComponents, NSString;

@interface PKContact : NSObject <Swift>

{
    NSPersonNameComponents *_name;
    CNPostalAddress *_postalAddress;
    CNPhoneNumber *_phoneNumber;
    NSString *_emailAddress;
    NSString *_supplementarySubLocality;
}

@property (retain, nonatomic) NSPersonNameComponents *name;
@property (retain, nonatomic) CNPostalAddress *postalAddress;
@property (retain, nonatomic) CNPhoneNumber *phoneNumber;
@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *supplementarySubLocality;

+ (_Bool)supportsSecureCoding;
+ (long long)version;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)cnMutableContact;
- (id)initWithCNContact:(id)arg1;
- (_Bool)isEqualToContact:(id)arg1;

@end
