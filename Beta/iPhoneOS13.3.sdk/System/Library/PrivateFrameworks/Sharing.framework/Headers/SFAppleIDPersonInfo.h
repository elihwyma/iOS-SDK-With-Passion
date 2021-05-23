/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface SFAppleIDPersonInfo : NSObject

{
    _Bool _didMatchEmail;
    _Bool _didMatchPhone;
    NSString *_accountIdentifier;
    NSString *_altDSID;
    long long _certificateStatus;
    NSString *_matchedValue;
    NSDate *_validUntilDate;
}

@property (nonatomic, readonly) NSDate *validUntilDate;
@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) long long certificateStatus;
@property (nonatomic, readonly) _Bool didMatchEmail;
@property (nonatomic, readonly) _Bool didMatchPhone;
@property (nonatomic, readonly) _Bool isStale;
@property (nonatomic, readonly) NSString *matchedValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToPersonInfo:(id)arg1;

@end
