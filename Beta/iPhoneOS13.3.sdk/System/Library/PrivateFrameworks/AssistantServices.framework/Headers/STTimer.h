/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/STSiriModelObject.h>

@class NSNumber;

@interface STTimer : STSiriModelObject

{
    long long _state;
    NSNumber *_value;
}

@property (nonatomic) long long state;
@property (copy, nonatomic) NSNumber *value;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
