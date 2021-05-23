/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class WFColor;

@interface WFGradient : NSObject <Swift>

{
    struct CGGradient *_CGGradient;
    WFColor *_baseColor;
    WFColor *_darkBaseColor;
    WFColor *_accessibilityBaseColor;
    WFColor *_darkAccessibilityBaseColor;
    WFColor *_startColor;
    WFColor *_endColor;
    long long _blendMode;
}

@property (nonatomic, readonly) WFColor *baseColor;
@property (nonatomic, readonly) WFColor *darkBaseColor;
@property (nonatomic, readonly) WFColor *accessibilityBaseColor;
@property (nonatomic, readonly) WFColor *darkAccessibilityBaseColor;
@property (nonatomic, readonly) WFColor *startColor;
@property (nonatomic, readonly) WFColor *endColor;
@property (nonatomic, readonly) long long blendMode;
@property (nonatomic, readonly) struct CGGradient *CGGradient;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColor:(id)arg1;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2;
- (id)initWithBaseColor:(id)arg1 startColor:(id)arg2 endColor:(id)arg3 blendMode:(long long)arg4;
- (id)initWithBaseColor:(id)arg1 darkBaseColor:(id)arg2 accessibilityBaseColor:(id)arg3 darkAccessibilityBaseColor:(id)arg4 startColor:(id)arg5 endColor:(id)arg6 blendMode:(long long)arg7;

@end
