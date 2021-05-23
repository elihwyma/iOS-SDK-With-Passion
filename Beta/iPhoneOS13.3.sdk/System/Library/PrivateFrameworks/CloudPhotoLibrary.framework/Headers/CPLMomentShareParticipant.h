/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSPersonNameComponents, NSString;

@interface CPLMomentShareParticipant : NSObject

{
    _Bool _hasiCloudAccount;
    _Bool _isCurrentUser;
    short _type;
    short _status;
    NSString *_email;
    NSString *_phoneNumber;
    NSString *_userIdentifier;
    NSPersonNameComponents *_nameComponents;
}

@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (nonatomic) _Bool hasiCloudAccount;
@property (nonatomic) _Bool isCurrentUser;
@property (nonatomic) short type;
@property (nonatomic) short status;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
