/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/STSiriModelObject.h>

@class NSSet, NSString;

@interface STPerson : STSiriModelObject

{
    NSSet *_contactHandles;
    NSString *_fullName;
}

@property (copy, nonatomic) NSSet *contactHandles;
@property (copy, nonatomic) NSString *fullName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
