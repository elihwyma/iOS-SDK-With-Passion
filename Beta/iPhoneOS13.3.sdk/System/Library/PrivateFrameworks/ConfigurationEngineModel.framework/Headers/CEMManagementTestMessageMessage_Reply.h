/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMManagementTestMessageMessage_Reply : CEMPayloadBase

{
    NSString *_replyEcho;
}

@property (copy, nonatomic) NSString *replyEcho;

+ (id)allowedReasons;
+ (id)buildWithEcho:(id)arg1;
+ (id)buildRequiredOnlyWithEcho:(id)arg1;
+ (id)allowedReplyKeys;

- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
