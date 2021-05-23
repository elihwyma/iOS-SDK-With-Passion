/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL;

@interface BCOAuth2Parameters : NSObject

{
    NSString *_clientIdentifier;
    NSString *_clientSecret;
    NSArray *_scope;
    NSString *_state;
    NSString *_responseType;
    NSString *_responseEncryptionKey;
    NSURL *_authorizationURL;
    NSURL *_accessTokenURL;
}

@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *clientSecret;
@property (retain, nonatomic) NSArray *scope;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *responseType;
@property (retain, nonatomic) NSString *responseEncryptionKey;
@property (retain, nonatomic) NSURL *authorizationURL;
@property (retain, nonatomic) NSURL *accessTokenURL;

+ (_Bool)supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)tokenExchangeURLWith:(id)arg1;
- (id)authenticationSessionURL;

@end
