/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@interface AFCoercion : NSObject

{
    CDUnknownBlockType _block;
}

+ (id)typeAssertionWithClass:(Class)arg1;
+ (id)stringToUUIDCoercion;
+ (id)coercionWithBlock:(CDUnknownBlockType)arg1;
+ (id)identityCoercion;

- (id)init;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)coerceObject:(id)arg1 error:(id *)arg2;

@end
