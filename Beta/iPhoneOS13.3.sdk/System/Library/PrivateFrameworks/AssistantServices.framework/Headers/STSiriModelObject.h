/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSString;

@interface STSiriModelObject : NSObject <Swift>

{
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)_aceContextObjectValue;
- (Class)_aceCollectionClass;

@end
