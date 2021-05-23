/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSiriResponse.h>

@class NSURL;

@interface AFObjectCreatedSiriResponse : AFSiriResponse

{
    NSURL *_objectIdentifier;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_objectIdentifier;
- (id)_initWithRequest:(id)arg1 objectIdentifier:(id)arg2;

@end
