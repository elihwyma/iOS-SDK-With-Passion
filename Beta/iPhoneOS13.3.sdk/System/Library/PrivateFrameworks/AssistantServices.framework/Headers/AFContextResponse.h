/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSiriResponse.h>

@class STSiriContext;

@interface AFContextResponse : AFSiriResponse

{
    STSiriContext *_context;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_context;
- (id)_initWithRequest:(id)arg1 context:(id)arg2;

@end
