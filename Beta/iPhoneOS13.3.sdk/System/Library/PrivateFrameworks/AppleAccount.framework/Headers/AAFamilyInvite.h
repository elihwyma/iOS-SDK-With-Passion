/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface AAFamilyInvite : NSObject

{
    _Bool _isChildTransferInvite;
    NSString *_code;
    NSString *_organizerFirstName;
    NSString *_organizerLastName;
    NSString *_organizerEmail;
    NSNumber *_organizerDSID;
    NSNumber *_recepientDSID;
    NSString *_childFirstName;
    NSString *_childLastName;
}

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *organizerFirstName;
@property (copy, nonatomic) NSString *organizerLastName;
@property (copy, nonatomic) NSString *organizerEmail;
@property (copy, nonatomic) NSNumber *organizerDSID;
@property (copy, nonatomic) NSNumber *recepientDSID;
@property (nonatomic) _Bool isChildTransferInvite;
@property (copy, nonatomic) NSString *childFirstName;
@property (copy, nonatomic) NSString *childLastName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
