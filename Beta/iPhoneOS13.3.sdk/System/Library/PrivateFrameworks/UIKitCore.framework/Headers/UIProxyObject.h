/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIProxyObject : NSObject <Swift>

{
    NSString *proxiedObjectIdentifier;
}

+ (void)addMappingFromIdentifier:(id)arg1 toObject:(id)arg2 forCoder:(id)arg3;
+ (void)addMappings:(id)arg1 forCoder:(id)arg2;
+ (void)removeMappingsForCoder:(id)arg1;
+ (struct __CFDictionary *)proxyDecodingMap;
+ (id)mappedObjectForCoder:(id)arg1 withIdentifier:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)proxiedObjectIdentifier;
- (void)setProxiedObjectIdentifier:(id)arg1;

@end
