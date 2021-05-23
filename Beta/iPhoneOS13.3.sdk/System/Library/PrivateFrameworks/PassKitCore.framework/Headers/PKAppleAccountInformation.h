/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKAppleAccountInformation : NSObject <Swift>

{
    _Bool _isSandboxAccount;
    NSString *_aidaAlternateDSID;
    NSString *_aidaToken;
    NSString *_aaAlternateDSID;
    NSString *_appleID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_primaryEmailAddress;
}

@property (copy, nonatomic) NSString *aidaAlternateDSID;
@property (copy, nonatomic) NSString *aidaToken;
@property (copy, nonatomic) NSString *aaAlternateDSID;
@property (copy, nonatomic) NSString *appleID;
@property (nonatomic) _Bool isSandboxAccount;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *primaryEmailAddress;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)authorizationHeader;
- (_Bool)aidaAccountAvailable;
- (id)primaryAppleAccountHash;

@end
