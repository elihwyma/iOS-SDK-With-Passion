/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIKBGradient;

__attribute__((visibility("hidden")))
@interface UIKBShadowEffect : NSObject

{
    NSString *_colorName;
    double _weight;
    struct CGSize _offset;
    struct UIEdgeInsets _insets;
    struct UIEdgeInsets _concaveInsets;
}

@property (nonatomic) struct CGSize offset;
@property (nonatomic) struct UIEdgeInsets insets;
@property (nonatomic) struct UIEdgeInsets concaveInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isValid;
@property (nonatomic, readonly) _Bool renderUnder;
@property (nonatomic, readonly) SEL renderSelector;
@property (nonatomic) double weight;
@property (nonatomic, readonly) _Bool usesRGBColors;
@property (nonatomic, readonly) UIKBGradient *gradient;

+ (id)effectWithColor:(id)arg1 offset:(struct CGSize)arg2 insets:(struct UIEdgeInsets)arg3 weight:(double)arg4;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGColor *)CGColor;
- (id)initWithColor:(id)arg1 offset:(struct CGSize)arg2 insets:(struct UIEdgeInsets)arg3 weight:(double)arg4;

@end
