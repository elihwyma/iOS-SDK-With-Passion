/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CLKComplicationTemplate, CLKDevice, CLKFont, NSString, NTKColoringLabel;

@protocol NTKComplicationDisplayObserver;

@interface NTKSimpleTextComplicationView : UIView <Swift>

{
    _Bool canUseCurvedText;
    id <NTKComplicationDisplayObserver> displayObserver;
    CLKFont *_font;
    NTKColoringLabel *_label;
    CLKDevice *_device;
    CLKComplicationTemplate *_template;
}

@property (retain, nonatomic) NTKColoringLabel *label;
@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) CLKComplicationTemplate *template;
@property (retain, nonatomic) CLKFont *font;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) _Bool canUseCurvedText;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) _Bool shouldUseTemplateColors;

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (id)complicationTemplate;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;

@end
