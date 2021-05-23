/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICMusicSubscriptionStatus, NSDate, NSDictionary;

@interface ICMusicSubscriptionStatusResponse : NSObject <Swift>

{
    _Bool _finalResponse;
    _Bool _needsReload;
    ICMusicSubscriptionStatus *_subscriptionStatus;
    NSDate *_expirationDate;
}

@property (nonatomic, getter=isFinalResponse) _Bool finalResponse;
@property (nonatomic) _Bool needsReload;
@property (copy, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus;
@property (copy, nonatomic, readonly) NSDictionary *propertyListRepresentation;
@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly, getter=isExpired) _Bool expired;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2;

@end
