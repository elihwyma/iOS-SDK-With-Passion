/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUJSProxy.h>

@interface NUJSObject : NUJSProxy

+ (struct OpaqueJSClass *)jsClass;

- (id)toObject;
- (id)toString;
- (_Bool)hasProperty:(id)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (id)JSValueWithContext:(id)arg1;

@end
