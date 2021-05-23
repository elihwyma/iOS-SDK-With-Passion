/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNObjCMethod : NSObject

{
    NSString *_name;
    CDUnknownFunctionPointerType _implementation;
    NSString *_typeEncoding;
}

@property (readonly) SEL selector;
@property (copy, readonly) NSString *name;
@property (readonly) CDUnknownFunctionPointerType implementation;
@property (copy, readonly) NSString *typeEncoding;

+ (id)methodWithName:(id)arg1 implementation:(CDUnknownFunctionPointerType)arg2 typeEncoding:(id)arg3;

- (id)initWithName:(id)arg1 implementation:(CDUnknownFunctionPointerType)arg2 typeEncoding:(id)arg3;
- (id)initWithMethod:(struct objc_method *)arg1;
- (id)methodBySettingName:(id)arg1;
- (id)performOnObject:(id)arg1;

@end
