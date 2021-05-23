/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NSString, NTKColoringLabel;

@protocol NTKComplicationDisplayObserver;

@interface NTKMonogramCircularSmallComplicationView : NTKCircularComplicationView

{
    NTKColoringLabel *_label;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) _Bool canUseCurvedText;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) _Bool shouldUseTemplateColors;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;
- (void)setMonogramText:(id)arg1;
- (void)_updateLabelsForFontChange;

@end
