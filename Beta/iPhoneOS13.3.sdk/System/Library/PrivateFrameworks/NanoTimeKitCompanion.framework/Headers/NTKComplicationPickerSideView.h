/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKEditOptionPickerSideView.h>

@class NSString, NTKComplicationLayoutRule;

@interface NTKComplicationPickerSideView : NTKEditOptionPickerSideView

{
    NTKComplicationLayoutRule *_layoutRule;
    long long _style;
}

@property (copy, nonatomic) NTKComplicationLayoutRule *layoutRule;
@property (nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (void)setCurvedAngle:(double)arg1;

@end
