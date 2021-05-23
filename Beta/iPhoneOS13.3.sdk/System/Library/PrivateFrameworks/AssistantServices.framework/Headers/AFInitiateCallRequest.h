/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSiriRequest.h>

@class STCall;

@interface AFInitiateCallRequest : AFSiriRequest

{
    STCall *_call;
}

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)call;
- (id)createResponse;
- (id)_initWithCall:(id)arg1;

@end
