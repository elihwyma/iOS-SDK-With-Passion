/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@class STSiriMessage;

@interface STShowMessageRequest : AFSiriRequest

{
    STSiriMessage *_message;
    _Bool _showAsDraft;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (id)createResponse;
- (_Bool)_makeAppFrontmost;
- (_Bool)showAsDraft;
- (id)_initWithMessage:(id)arg1 showAsDraft:(_Bool)arg2;

@end
