/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIKBGradient;

__attribute__((visibility("hidden")))
@interface UIKBEdgeEffect : NSObject

{
    NSString *_colorName;
    unsigned long long _edges;
    double _weight;
    UIKBGradient *_gradient;
    double _opacity;
    struct UIEdgeInsets _insets;
}

@property (nonatomic) unsigned long long edges;
@property (nonatomic) struct UIEdgeInsets insets;
@property (retain, nonatomic) UIKBGradient *gradient;
@property (nonatomic) double opacity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isValid;
@property (nonatomic, readonly) _Bool renderUnder;
@property (nonatomic, readonly) SEL renderSelector;
@property (nonatomic) double weight;
@property (nonatomic, readonly) _Bool usesRGBColors;

+ (id)effectWithColor:(id)arg1 edges:(unsigned long long)arg2 inset:(double)arg3 weight:(double)arg4;
+ (id)effectWithColor:(id)arg1 edges:(unsigned long long)arg2 insets:(struct UIEdgeInsets)arg3 weight:(double)arg4;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGColor *)CGColor;
- (id)initWithColor:(id)arg1 edges:(unsigned long long)arg2 insets:(struct UIEdgeInsets)arg3 weight:(double)arg4;

@end
