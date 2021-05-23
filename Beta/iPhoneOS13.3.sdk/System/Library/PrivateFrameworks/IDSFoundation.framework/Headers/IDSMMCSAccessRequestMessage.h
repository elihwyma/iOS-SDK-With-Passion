/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSMessage.h>

@class NSArray, NSData, NSString;

@interface IDSMMCSAccessRequestMessage : IDSMessage

{
    NSArray *_downloadAuths;
    NSData *_downloadingDeviceToken;
    NSData *_sessionToken;
    NSString *_downloadingDeviceID;
    NSString *_senderID;
}

@property (retain, nonatomic) NSArray *downloadAuths;
@property (retain, nonatomic) NSData *downloadingDeviceToken;
@property (retain, nonatomic) NSData *sessionToken;
@property (retain, nonatomic) NSString *downloadingDeviceID;
@property (retain, nonatomic) NSString *senderID;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)messageBody;
- (long long)command;
- (long long)responseCommand;
- (id)requiredKeys;

@end
