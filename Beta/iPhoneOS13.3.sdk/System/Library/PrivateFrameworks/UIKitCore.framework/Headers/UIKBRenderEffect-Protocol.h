/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIKBGradient;

@protocol UIKBRenderEffect <Swift>

@property (nonatomic, readonly) _Bool isValid;
@property (nonatomic, readonly) _Bool renderUnder;
@property (nonatomic, readonly) SEL renderSelector;
@property (nonatomic) double weight;
@property (nonatomic, readonly) _Bool usesRGBColors;
@property (nonatomic, readonly) UIKBGradient *gradient;

- (unsigned short)CGColor;

@end
