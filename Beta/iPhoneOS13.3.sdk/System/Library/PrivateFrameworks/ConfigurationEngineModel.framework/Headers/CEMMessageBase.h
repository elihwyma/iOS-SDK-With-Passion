/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAnyPayload, NSDate, NSString;

@interface CEMMessageBase : CEMPayloadBase

{
    NSString *_messageType;
    NSString *_messageIdentifier;
    NSString *_messageInReplyTo;
    NSDate *_messageTimestamp;
    CEMAnyPayload *_messagePayload;
}

@property (copy, nonatomic) NSString *messageType;
@property (copy, nonatomic) NSString *messageIdentifier;
@property (copy, nonatomic) NSString *messageInReplyTo;
@property (copy, nonatomic) NSDate *messageTimestamp;
@property (copy, nonatomic) CEMAnyPayload *messagePayload;

+ (id)messageForPayload:(id)arg1 error:(id *)arg2;
+ (id)messageForData:(id)arg1 error:(id *)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serialize;
- (id)serializeAsDataWithError:(id *)arg1;
- (_Bool)loadMessageFromDictionary:(id)arg1 error:(id *)arg2;

@end
