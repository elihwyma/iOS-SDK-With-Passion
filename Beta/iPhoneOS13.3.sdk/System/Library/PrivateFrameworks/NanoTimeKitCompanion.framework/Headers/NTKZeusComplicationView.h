/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CLKDevice, NSString, NTKZeusColorPalette;

@protocol NTKComplicationDisplayObserver;

@interface NTKZeusComplicationView : UIView <Swift>

{
    _Bool canUseCurvedText;
    _Bool _highlighted;
    _Bool _legibilityEnabled;
    id <NTKComplicationDisplayObserver> displayObserver;
    unsigned long long _style;
    NTKZeusColorPalette *_palette;
    CLKDevice *_device;
}

@property (nonatomic, readonly) CLKDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) _Bool canUseCurvedText;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) _Bool shouldUseTemplateColors;
@property (nonatomic) unsigned long long style;
@property (nonatomic, readonly) NTKZeusColorPalette *palette;
@property (nonatomic) _Bool legibilityEnabled;

+ (id)viewForComplicationType:(unsigned long long)arg1;

- (id)init;
- (struct CGRect)contentFrame;
- (void)_updateLegibility;
- (void)applyPalette:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;

@end
