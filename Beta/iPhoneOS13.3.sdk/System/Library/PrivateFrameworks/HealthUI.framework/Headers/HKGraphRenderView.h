/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class NSString;

@protocol HKGraphRenderDelegate;

@interface HKGraphRenderView : UIView

{
    id <HKGraphRenderDelegate> renderDelegate;
    struct CGRect _axisRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGRect axisRect;
@property (weak, nonatomic) id <HKGraphRenderDelegate> renderDelegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setNeedsRender;
- (void)drawPath:(id)arg1 strokeColor:(id)arg2 fillColor:(id)arg3 markerImage:(id)arg4 useGradientFill:(_Bool)arg5 blendMode:(int)arg6 clipToAxes:(_Bool)arg7;
- (void)fillRect:(struct CGRect)arg1 withTexture:(id)arg2;
- (struct CGSize)drawText:(id)arg1 atPoint:(struct CGPoint)arg2 spaceAvailable:(id)arg3 horizontalAlignment:(long long)arg4 verticalAlignment:(long long)arg5 textColor:(id)arg6 font:(id)arg7 clipToAxis:(_Bool)arg8 exclusion:(id)arg9;

@end
