/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKZeusComplicationView.h>

@class NSString, UIImageView;

@protocol NTKComplicationDisplayObserver;

@interface NTKZeusDateComplicationView : NTKZeusComplicationView

{
    UIImageView *_imageView;
    int _currentDayNumber;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) _Bool canUseCurvedText;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) _Bool shouldUseTemplateColors;

- (id)init;
- (void)setStyle:(unsigned long long)arg1;
- (struct CGRect)contentFrame;
- (void)layoutSubviews;
- (void)_updateImage;
- (void)applyPalette:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
- (void)setDateComplicationText:(id)arg1 withDayRange:(struct _NSRange)arg2 forDateStyle:(unsigned long long)arg3;
- (unsigned long long)desiredDateComplicationDateStyle;

@end
