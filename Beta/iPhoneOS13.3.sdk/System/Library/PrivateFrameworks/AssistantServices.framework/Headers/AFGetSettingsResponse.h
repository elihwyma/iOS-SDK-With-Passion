/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSiriResponse.h>

@class NSArray;

@interface AFGetSettingsResponse : AFSiriResponse

{
    NSArray *_settings;
}

@property (copy, nonatomic) NSArray *settings;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
