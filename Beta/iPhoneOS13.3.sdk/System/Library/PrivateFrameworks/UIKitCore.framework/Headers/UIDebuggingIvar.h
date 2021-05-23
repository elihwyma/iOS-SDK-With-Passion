/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIDebuggingIvar : NSObject

{
    NSString *_name;
    NSString *_typeDescription;
    id _value;
    NSObject *_object;
    struct objc_ivar *_objcIvar;
    const char *_typeEncoding;
}

@property (nonatomic) NSObject *object;
@property (nonatomic) struct objc_ivar *objcIvar;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *typeDescription;
@property (nonatomic) const char *typeEncoding;
@property (nonatomic) id value;
@property (nonatomic, readonly) NSString *valueDescription;
@property (nonatomic, readonly) _Bool isObject;

+ (id)ivarWithObjcIvar:(struct objc_ivar *)arg1 forObject:(id)arg2;

- (void)dealloc;

@end
