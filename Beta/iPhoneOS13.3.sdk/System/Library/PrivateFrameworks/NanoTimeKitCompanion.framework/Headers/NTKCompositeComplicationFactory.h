/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface NTKCompositeComplicationFactory : NSObject

{
    NSMutableDictionary *_factoriesBySlot;
    NSMutableOrderedSet *_factories;
}

@property (retain, nonatomic) NSMutableDictionary *factoriesBySlot;
@property (retain, nonatomic) NSMutableOrderedSet *factories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)registerFactory:(id)arg1 forSlot:(id)arg2;
- (void)deregisterFactoryAtSlot:(id)arg1;
- (long long)complicationPickerStyleForSlot:(id)arg1;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)curvedComplicationCircleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(id)arg6;
- (id)pickerMaskForSlot:(id)arg1;
- (id)customEditOptionContainerViewForSlot:(id)arg1;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)loadLayoutRules;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (_Bool)slotSupportsCurvedText:(id)arg1;
- (void)registerFactory:(id)arg1 forSlots:(id)arg2;
- (void)deregisterFactoryAtSlots:(id)arg1;

@end
