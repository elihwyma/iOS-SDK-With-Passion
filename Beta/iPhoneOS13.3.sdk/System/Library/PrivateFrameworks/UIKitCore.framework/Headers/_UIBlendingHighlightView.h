/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSString;

@interface _UIBlendingHighlightView : UIView

{
    NSMutableArray *_blendingViews;
    double _cornerRadius;
}

@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isBorderView;
+ (id)_blendingPressedView;
+ (id)_blendingSeparatorView;

- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setPressed:(_Bool)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;
- (id)initWithTopLevelFilters:(id)arg1 compositingColors:(id)arg2 compositingFilterModes:(id)arg3;
- (id)initWithCompositingBurnColor:(id)arg1 plusDColor:(id)arg2;
- (struct UIEdgeInsets)_effectiveNonDirectionalContentInsets;
- (void)_enumerateAllBlendingViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateBlendingBorderViewsWithBlock:(CDUnknownBlockType)arg1;

@end
