/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/FTIDSMessage.h>

@class NSData, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface IDSWebTunnelRequestMessage : FTIDSMessage

{
    NSString *_messageRequestUUID;
    NSString *_messageURL;
    NSData *_messageRequestBodyData;
    NSDictionary *_messageRequestBodyDictionary;
    NSMutableDictionary *_messageHeaders;
    NSNumber *_maximumResponseSize;
    NSDictionary *_responseBodyDictionary;
    NSData *_responseBodyData;
    NSDictionary *_responseHeaders;
    NSNumber *_responseCode;
    NSNumber *_responseStatus;
    _Bool _disableIDSTranslation;
    NSString *_userAgentOverride;
}

@property (copy, nonatomic) NSString *messageRequestUUID;
@property (copy, nonatomic) NSString *messageURL;
@property (copy, nonatomic) NSData *messageRequestBodyData;
@property (copy, nonatomic) NSDictionary *messageRequestBodyDictionary;
@property (copy, nonatomic) NSMutableDictionary *messageHeaders;
@property (copy, nonatomic) NSNumber *maximumResponseSize;
@property (copy, nonatomic) NSString *userAgentOverride;
@property (copy, nonatomic) NSData *responseBodyData;
@property (copy, nonatomic) NSDictionary *responseBodyDictionary;
@property (copy, nonatomic) NSDictionary *responseHeaders;
@property (copy, nonatomic) NSNumber *responseCode;
@property (copy, nonatomic) NSNumber *responseStatus;
@property (nonatomic) _Bool disableIDSTranslation;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMessage:(id)arg1;
- (id)messageBody;
- (_Bool)wantsBinaryPush;
- (_Bool)wantsCompressedBody;
- (_Bool)isWebTunnelMessage;
- (_Bool)isIDSMessage;
- (id)additionalMessageHeadersForOutgoingPush;
- (void)handleResponseHeaders:(id)arg1;
- (void)handleResponseDictionary:(id)arg1;
- (_Bool)wantsIDSProtocolVersion;

@end
