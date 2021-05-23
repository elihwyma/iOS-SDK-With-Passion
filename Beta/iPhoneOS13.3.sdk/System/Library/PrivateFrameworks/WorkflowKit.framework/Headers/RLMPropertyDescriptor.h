/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RLMPropertyDescriptor : NSObject

{
    Class _objectClass;
    NSString *_propertyName;
}

@property (nonatomic, readonly) Class objectClass;
@property (nonatomic, readonly) NSString *propertyName;

+ (id)descriptorWithClass:(Class)arg1 propertyName:(id)arg2;

@end
