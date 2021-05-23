/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, NSString, NTKUtilityComplicationFactory, NTKWellnessEntryModel;

@protocol NTKActivityFaceViewFactoryDelegate, OS_dispatch_source;

@interface NTKActivityFaceViewFactory : NSObject

{
    NTKWellnessEntryModel *_nowEntryModel;
    _Bool _wantsUpdateNowEntryModelNextLive;
    double _lastWristRaiseTime;
    double _wristRaiseTimoutDuration;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    _Bool _analog;
    _Bool _hasBeenLiveOrOnDeck;
    _Bool _isLoadingData;
    _Bool _showsCanonicalContent;
    _Bool _showsLockedContent;
    CLKDevice *_device;
    NTKUtilityComplicationFactory *_complicationFactory;
    id <NTKActivityFaceViewFactoryDelegate> _delegate;
    long long _dataMode;
}

@property (nonatomic, readonly) _Bool analog;
@property (nonatomic, readonly) CLKDevice *device;
@property (retain, nonatomic) NTKUtilityComplicationFactory *complicationFactory;
@property (nonatomic) _Bool hasBeenLiveOrOnDeck;
@property (nonatomic) _Bool isLoadingData;
@property (nonatomic) _Bool showsCanonicalContent;
@property (nonatomic) _Bool showsLockedContent;
@property (weak, nonatomic) id <NTKActivityFaceViewFactoryDelegate> delegate;
@property (nonatomic) long long dataMode;
@property (nonatomic, readonly) NTKWellnessEntryModel *currentEntryModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)prelaunchApplicationIdentifiers;
+ (id)userActiveEnergyUnit;
+ (id)sharedRingsViewRenderer;
+ (void)prewarmForDevice:(id)arg1;
+ (_Bool)userActiveEnergyIsCalories;

- (void)dealloc;
- (long long)complicationPickerStyleForSlot:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (long long)_utilitySlotForSlot:(id)arg1;
- (void)prepareWristRaiseAnimation;
- (void)performWristRaiseAnimation;
- (long long)keylineStyleForComplicationSlot:(id)arg1;
- (id)curvedMaskForSlot:(id)arg1;
- (id)_utilityComplicationSlots;
- (double)_keylinePaddingForState:(long long)arg1;
- (double)_edgeGapForState:(long long)arg1;
- (double)_lisaGapForState:(long long)arg1;
- (_Bool)slotUsesCurvedText:(long long)arg1;
- (id)_colorComplicationSlots;
- (id)_slotForUtilitySlot:(long long)arg1;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)_complicationSlots;
- (void)curvedCircleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(id)arg6;
- (id)initForAnalog:(_Bool)arg1 forDevice:(id)arg2;
- (void)launchActivityApp;
- (id)faceView:(id)arg1 newLegacyViewForComplication:(id)arg2 family:(long long)arg3 slot:(id)arg4;
- (void)faceView:(id)arg1 configureComplicationView:(id)arg2 forSlot:(id)arg3;
- (long long)faceView:(id)arg1 legacyLayoutOverrideforComplicationType:(unsigned long long)arg2 slot:(id)arg3;
- (unsigned long long)faceView:(id)arg1 keylineLabelAlignmentForComplicationSlot:(id)arg2;
- (double)faceView:(id)arg1 keylineCornerRadiusForComplicationSlot:(id)arg2;
- (id)_dateComplicationFontForStyle:(unsigned long long)arg1;
- (void)_configureComplicationFactory:(id)arg1;
- (void)_handleActiveEnergyUnitChange;
- (void)_loadCurrentEntryForce:(_Bool)arg1;
- (void)_updateRingsForCurrentEntryModelAnimated:(_Bool)arg1;
- (void)_loadCurrentEntry;
- (id)_canonicalEntryModel;
- (void)_resetWristRaiseAnimationTimeout;
- (_Bool)shouldPerformFromZeroWristRaise;
- (_Bool)_slotUsesCurvedText:(long long)arg1;
- (void)wellnessTimeLineModelCurrentEntryModelUpdated:(id)arg1;
- (id)debugStringForEntry:(id)arg1;

@end
