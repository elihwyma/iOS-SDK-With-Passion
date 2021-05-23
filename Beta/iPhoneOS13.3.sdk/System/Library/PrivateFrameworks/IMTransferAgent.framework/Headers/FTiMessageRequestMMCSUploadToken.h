/*
 Image: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
 */

#import <IDS/IDSMessage.h>

@class NSData, NSNumber, NSString;

@interface FTiMessageRequestMMCSUploadToken : IDSMessage

{
    NSData *pushToken;
    NSString *_responseAuthToken;
    NSNumber *_length;
    NSData *_signature;
    NSString *_responseRequestURL;
    NSString *_responseRequestorID;
    long long _contentVersion;
    NSString *_contentHeaders;
    NSData *_contentBody;
    NSString *_responseContentHeaders;
    NSData *_responseContentBody;
    long long _responseContentVersion;
    NSData *_sessionToken;
    NSString *_senderID;
    NSString *_destinationID;
    NSString *_anonymousSenderID;
}

@property (copy) NSData *signature;
@property (copy) NSNumber *length;
@property (copy) NSString *responseAuthToken;
@property (copy) NSString *responseRequestURL;
@property (copy) NSString *responseRequestorID;
@property long long contentVersion;
@property (copy) NSString *contentHeaders;
@property (copy) NSData *contentBody;
@property (copy) NSString *responseContentHeaders;
@property (copy) NSData *responseContentBody;
@property long long responseContentVersion;
@property (copy, nonatomic) NSData *pushToken;
@property (copy, nonatomic) NSData *sessionToken;
@property (copy, nonatomic) NSString *senderID;
@property (copy, nonatomic) NSString *destinationID;
@property (copy, nonatomic) NSString *anonymousSenderID;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)messageBody;
- (long long)command;
- (long long)responseCommand;
- (id)requiredKeys;
- (void)handleResponseDictionary:(id)arg1;

@end
