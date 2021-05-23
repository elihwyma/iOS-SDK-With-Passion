/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/STSiriModelObject.h>

@interface STSetting : STSiriModelObject

{
    long long _type;
    id _value;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) id value;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
