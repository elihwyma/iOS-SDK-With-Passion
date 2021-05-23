/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIImageContentRendition : NSObject

{
    _Bool _requiresMasking;
    struct CGImage *_CGImage;
    UIColor *_multiplyColor;
}

@property (nonatomic, readonly) struct CGImage *CGImage;
@property (nonatomic, readonly) UIColor *multiplyColor;
@property (nonatomic, readonly) _Bool requiresMasking;

+ (id)renditionWithCGImage:(struct CGImage *)arg1 color:(id)arg2 requiresMasking:(_Bool)arg3;

- (void)dealloc;

@end
