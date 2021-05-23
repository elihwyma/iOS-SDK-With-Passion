/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFGetSettingsRequest : AFSiriRequest

{
    NSArray *_settings;
}

@property (copy, nonatomic) NSArray *settings;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)createResponse;

@end
