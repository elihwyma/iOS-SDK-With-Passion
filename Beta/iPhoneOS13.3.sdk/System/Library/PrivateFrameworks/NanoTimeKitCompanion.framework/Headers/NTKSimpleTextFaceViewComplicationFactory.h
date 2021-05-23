/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, NSString, NTKFaceView;

@protocol NTKUtilityFlatComplicationViewDelegate;

@interface NTKSimpleTextFaceViewComplicationFactory : NSObject

{
    NTKFaceView<NTKUtilityFlatComplicationViewDelegate> *_faceView;
    CLKDevice *_device;
}

@property (retain, nonatomic) CLKDevice *device;
@property (weak, nonatomic) NTKFaceView<NTKUtilityFlatComplicationViewDelegate> *faceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (struct CGRect)_referenceFrame;
- (long long)complicationPickerStyleForSlot:(id)arg1;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)pickerMaskForSlot:(id)arg1;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (void)loadLayoutRules;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;

@end
