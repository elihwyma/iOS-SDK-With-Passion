/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSBundle, NSString, UIImageConfiguration;

__attribute__((visibility("hidden")))
@interface _UIImageCacheKey : NSObject <Swift>

{
    NSString *_name;
    UIImageConfiguration *_configuration;
    NSBundle *_bundle;
    struct {
        unsigned int system:1;
        unsigned int private:1;
    } _flags;
}

+ (id)keyWithName:(id)arg1 configuration:(id)arg2 bundle:(id)arg3;
+ (id)keyWithName:(id)arg1 configuration:(id)arg2;
+ (id)keyWithSystemName:(id)arg1 private:(_Bool)arg2 configuration:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
