/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@interface UIGradient : NSObject

{
    CDStruct_d83abbfb *_values;
    double _height;
    struct CGShading *_shader;
}

- (void)dealloc;
- (void)fillRect:(struct CGRect)arg1;
- (id)initVerticalWithValues:(CDStruct_d83abbfb *)arg1;
- (void)fillRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;

@end
