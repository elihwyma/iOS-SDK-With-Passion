/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@class STSiriMessage;

@interface STSendDraftMessageRequest : AFSiriRequest

{
    STSiriMessage *_message;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (id)_initWithMessage:(id)arg1;
- (id)createResponse;
- (_Bool)_makeAppFrontmost;

@end
