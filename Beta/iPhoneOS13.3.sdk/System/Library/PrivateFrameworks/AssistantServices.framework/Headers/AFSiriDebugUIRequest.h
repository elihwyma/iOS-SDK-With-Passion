/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSiriRequest.h>

@class NSString;

@interface AFSiriDebugUIRequest : AFSiriRequest

{
    NSString *_message;
    _Bool _frontmost;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (id)createResponse;
- (id)initWithMessage:(id)arg1 makeAppFrontmost:(_Bool)arg2;
- (_Bool)_makeAppFrontmost;

@end
