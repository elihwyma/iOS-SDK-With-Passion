/*
 Image: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
 */

#import <IDS/IDSMessage.h>

@class NSData, NSString;

@interface FTiMessageRequestMMCSDownloadToken : IDSMessage

{
    NSString *_owner;
    NSString *_responseAuthToken;
    NSData *_signature;
    NSString *_responseRequestorID;
    long long _contentVersion;
    NSString *_contentHeaders;
    NSString *_authURLString;
    NSData *_responseContentBody;
    long long _responseContentVersion;
}

@property (copy) NSString *owner;
@property (copy) NSData *signature;
@property (copy) NSString *responseAuthToken;
@property (copy) NSString *responseRequestorID;
@property long long contentVersion;
@property (copy) NSString *contentHeaders;
@property (copy) NSString *authURLString;
@property (copy) NSData *responseContentBody;
@property long long responseContentVersion;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)messageBody;
- (long long)command;
- (long long)responseCommand;
- (id)requiredKeys;
- (void)handleResponseDictionary:(id)arg1;

@end
