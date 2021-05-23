/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@class NSURL;

@interface STShowDraftMessageRequest : AFSiriRequest

{
    NSURL *_draftMessageIdentifier;
}

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (id)createResponse;
- (id)_initWithDraftMessageIdentifier:(id)arg1;
- (id)draftMessageIdentifier;
- (id)createUsageResult;

@end
