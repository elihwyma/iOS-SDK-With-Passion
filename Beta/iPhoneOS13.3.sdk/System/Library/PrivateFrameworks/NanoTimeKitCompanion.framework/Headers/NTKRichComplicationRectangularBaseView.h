/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationView.h>

@protocol NTKRichComplicationRectangularBaseViewDelegate;

@interface NTKRichComplicationRectangularBaseView : NTKRichComplicationView

{
    id <NTKRichComplicationRectangularBaseViewDelegate> _delegate;
}

@property (weak, nonatomic) id <NTKRichComplicationRectangularBaseViewDelegate> delegate;

+ (id)viewWithLegacyComplicationType:(unsigned long long)arg1;
+ (void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(_Bool)arg3 animationType:(unsigned long long)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6;

- (id)init;
- (id)_createAndAddColoringLabelWithFontSize:(double)arg1 weight:(double)arg2 usesTextProviderTintColoring:(_Bool)arg3;
- (id)initWithFamily:(long long)arg1;
- (void)_transitToHighlightState:(_Bool)arg1 fraction:(double)arg2;

@end
