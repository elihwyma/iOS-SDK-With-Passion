/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@protocol OS_xpc_object;

@interface AFXPCWrapper : NSObject <Swift>

{
    NSObject<OS_xpc_object> *_xpcObject;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCObject:(id)arg1;
- (id)xpcObject;

@end
