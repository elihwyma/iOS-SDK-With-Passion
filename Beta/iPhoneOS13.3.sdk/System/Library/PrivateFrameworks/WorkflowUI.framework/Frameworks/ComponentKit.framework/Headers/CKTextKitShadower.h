/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface CKTextKitShadower : NSObject

{
    struct UIEdgeInsets _calculatedShadowPadding;
    UIColor *_shadowColor;
    double _shadowOpacity;
    double _shadowRadius;
    struct CGSize _shadowOffset;
}

@property (nonatomic, readonly) struct CGSize shadowOffset;
@property (nonatomic, readonly) UIColor *shadowColor;
@property (nonatomic, readonly) double shadowOpacity;
@property (nonatomic, readonly) double shadowRadius;

- (struct UIEdgeInsets)shadowPadding;
- (struct CGRect)offsetRectWithInternalRect:(struct CGRect)arg1;
- (struct CGPoint)offsetPointWithExternalPoint:(struct CGPoint)arg1;
- (void)setShadowInContext:(struct CGContext *)arg1;
- (struct CGRect)insetRectWithConstrainedRect:(struct CGRect)arg1;
- (struct CGSize)outsetSizeWithInsetSize:(struct CGSize)arg1;
- (struct CGSize)insetSizeWithConstrainedSize:(struct CGSize)arg1;
- (id)initWithShadowOffset:(struct CGSize)arg1 shadowColor:(id)arg2 shadowOpacity:(double)arg3 shadowRadius:(double)arg4;
- (_Bool)_shouldDrawShadow;
- (struct CGRect)outsetRectWithInsetRect:(struct CGRect)arg1;
- (struct CGPoint)offsetPointWithInternalPoint:(struct CGPoint)arg1;

@end
