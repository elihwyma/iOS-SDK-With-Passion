/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@interface CNObjCClass : NSObject

{
    Class _cls;
}

+ (void)enumerateMethodsOfClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)allMethodsOfClass:(Class)arg1;
+ (id)instanceMethodOfClass:(Class)arg1 forSelector:(SEL)arg2;
+ (_Bool)addMethod:(id)arg1 toClass:(Class)arg2;
+ (id)classWithClass:(Class)arg1;

- (id)instanceMethodForSelector:(SEL)arg1;
- (id)initWithClass:(Class)arg1;
- (void)enumerateMethodsWithBlock:(CDUnknownBlockType)arg1;
- (id)allMethods;
- (_Bool)addMethod:(id)arg1;

@end
