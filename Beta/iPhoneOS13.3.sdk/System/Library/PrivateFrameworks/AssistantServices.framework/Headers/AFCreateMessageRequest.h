/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSiriRequest.h>

@class STSiriMessage;

@interface AFCreateMessageRequest : AFSiriRequest

{
    STSiriMessage *_message;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (id)_initWithMessage:(id)arg1;
- (id)createResponseWithMessageIdentifier:(id)arg1;

@end
