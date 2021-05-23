/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@interface NUJSValueUtils : NSObject

+ (id)nujs_valueWithFunction:(id)arg1 params:(id)arg2 body:(id)arg3 sourceURL:(id)arg4 inContext:(id)arg5;
+ (id)nujs_properties:(id)arg1;
+ (id)nujs_toDictionary:(id)arg1;
+ (id)nujs_toArray:(id)arg1;
+ (_Bool)nujs_isFunction:(id)arg1;
+ (id)nujs_functionSource:(id)arg1;
+ (_Bool)nujs_isString:(id)arg1;
+ (id)nujs_callWithArguments:(id)arg1 thisObject:(id)arg2 jsValue:(id)arg3;
+ (id)nujs_toObject:(id)arg1;

@end
