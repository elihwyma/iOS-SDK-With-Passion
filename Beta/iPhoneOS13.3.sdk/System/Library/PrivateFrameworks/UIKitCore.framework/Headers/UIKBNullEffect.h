/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIKBGradient;

__attribute__((visibility("hidden")))
@interface UIKBNullEffect : NSObject

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

+ (id)nullEffect;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGColor *)CGColor;

@end
