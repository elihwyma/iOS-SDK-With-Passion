/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSDate;

@interface ICAgeVerifier : NSObject <Swift>

{
    long long _status;
    NSDate *_verificationExpirationDate;
}

@property (nonatomic) long long status;
@property (nonatomic, readonly, getter=isExplicitContentAllowed) _Bool explicitContentAllowed;
@property (nonatomic, readonly) NSDate *verificationExpirationDate;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExpirationDate:(id)arg1;
- (void)runAgeVerification;

@end
