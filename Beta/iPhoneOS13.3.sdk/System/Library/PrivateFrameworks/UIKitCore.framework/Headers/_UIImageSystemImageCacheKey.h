/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIImageSystemImageCacheKey : NSObject <Swift>

{
    NSString *_identifier;
    UIColor *_tintColor;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) UIColor *tintColor;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(id)arg1 tintColor:(id)arg2;

@end
