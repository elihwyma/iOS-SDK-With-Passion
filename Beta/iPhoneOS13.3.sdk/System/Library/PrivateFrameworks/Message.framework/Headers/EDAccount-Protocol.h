/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Swift-Protocol.h>

@class ACAccount, NSString;

@protocol EDAccount <Swift>

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) ACAccount *systemAccount;
@property (copy, nonatomic, readonly) NSString *statisticsKind;
@property (nonatomic, readonly) _Bool primaryiCloudAccount;

- (unsigned short)displayName;
- (unsigned short)hostname;
- (unsigned short)username;
- (unsigned short)canAuthenticateWithCurrentCredentials;
- (unsigned short)hasPasswordCredential;
- (unsigned short)savePersistentAccount;

@end
