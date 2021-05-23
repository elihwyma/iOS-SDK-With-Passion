/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSData, NSString;

@interface UNSPushRegistration : NSObject

{
    NSString *_environment;
    NSData *_token;
    NSString *_tokenIdentifier;
}

@property (copy, nonatomic, readonly) NSString *environment;
@property (copy, nonatomic, readonly) NSData *token;
@property (copy, nonatomic, readonly) NSString *tokenIdentifier;

+ (id)pushRegistrationWithEnvironment:(id)arg1 tokenIdentifier:(id)arg2 token:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithEnvironment:(id)arg1 tokenIdentifier:(id)arg2 token:(id)arg3;

@end
