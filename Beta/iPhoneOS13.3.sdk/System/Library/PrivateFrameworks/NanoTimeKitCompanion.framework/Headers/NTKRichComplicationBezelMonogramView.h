/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationBezelBaseTextView.h>

@class NSString, NTKColoringLabel;

@protocol NTKComplicationDisplayObserver;

@interface NTKRichComplicationBezelMonogramView : NTKRichComplicationBezelBaseTextView

{
    NTKColoringLabel *_textLabel;
    NSString *_monogramText;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) _Bool canUseCurvedText;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) _Bool shouldUseTemplateColors;

- (id)_labelFont;
- (void)setMonogramText:(id)arg1;
- (id)_createLabelViewWithFont:(id)arg1;

@end
