/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperationInfo.h>

@class NSData, NSString;

@interface CKCompleteParticipantVettingOperationInfo : CKOperationInfo

{
    NSString *_vettingToken;
    NSString *_vettingEmail;
    NSString *_vettingPhone;
    NSString *_routingKey;
    NSData *_encryptedKey;
    NSString *_baseToken;
    NSString *_displayedHostname;
}

@property (copy, nonatomic) NSString *vettingToken;
@property (retain, nonatomic) NSString *vettingEmail;
@property (retain, nonatomic) NSString *vettingPhone;
@property (retain, nonatomic) NSString *routingKey;
@property (retain, nonatomic) NSData *encryptedKey;
@property (retain, nonatomic) NSString *baseToken;
@property (retain, nonatomic) NSString *displayedHostname;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
