/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIBarAppearanceData : NSObject <Swift>

{
    _Bool _immutable;
}

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;
- (void)describeInto:(id)arg1;
- (id)writableInstance;
- (id)replicate;
- (long long)hashInto:(long long)arg1;
- (_Bool)checkEqualTo:(id)arg1;
- (void)assertMutable:(SEL)arg1;
- (void)markReadOnly;

@end
