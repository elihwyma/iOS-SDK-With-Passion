/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@interface UIGraphicsRendererFormat : NSObject <Swift>

{
    struct CGRect _bounds;
}

@property (nonatomic, readonly) struct CGRect bounds;

+ (id)preferredFormat;
+ (id)defaultFormat;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
