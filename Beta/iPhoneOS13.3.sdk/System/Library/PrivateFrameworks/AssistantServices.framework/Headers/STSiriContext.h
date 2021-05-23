/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSArray;

@interface STSiriContext : NSObject <Swift>

{
    NSArray *_modelObjects;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)modelObjects;
- (id)_aceValue;
- (id)initWithModelObjects:(id)arg1;

@end
