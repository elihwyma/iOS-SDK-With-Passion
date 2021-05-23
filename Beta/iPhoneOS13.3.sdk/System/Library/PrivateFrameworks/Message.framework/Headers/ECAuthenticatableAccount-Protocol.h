/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Swift-Protocol.h>

@class NSString;

@protocol ECAuthenticatableAccount <Swift>

@property (readonly) NSString *username;
@property (copy, readonly) NSString *password;
@property (copy, nonatomic, readonly) NSString *hostname;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *oauth2Token;

- (unsigned short)setMissingPasswordError;

@end
