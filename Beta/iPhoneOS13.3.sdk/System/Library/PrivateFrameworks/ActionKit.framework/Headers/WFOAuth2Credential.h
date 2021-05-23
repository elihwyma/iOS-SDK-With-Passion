/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface WFOAuth2Credential : NSObject <Swift>

{
    NSString *_tokenType;
    NSString *_accessToken;
    NSString *_refreshToken;
    NSDate *_expirationDate;
    NSDictionary *_responseObject;
}

@property (nonatomic, readonly) NSDictionary *responseObject;
@property (nonatomic, readonly) NSString *accessToken;
@property (nonatomic, readonly) NSString *tokenType;
@property (nonatomic, readonly) NSString *refreshToken;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic, readonly, getter=isExpired) _Bool expired;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseObject:(id)arg1;

@end
