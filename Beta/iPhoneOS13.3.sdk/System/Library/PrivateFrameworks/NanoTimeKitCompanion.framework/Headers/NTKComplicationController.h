/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, NSDate, NSMapTable, NSMutableArray, NTKComplication;

@protocol NTKComplicationDisplay;

@interface NTKComplicationController : NSObject

{
    _Bool _hasGoneLive;
    _Bool _active;
    id <NTKComplicationDisplay> _legacyDisplayDEPRECATED;
    NSMutableArray *_displayWrappers;
    NSMapTable *_displayWrappersToDataMode;
    _Bool _showsLockedUI;
    _Bool _faceZooming;
    NTKComplication *_complication;
    long long _complicationFamily;
    CLKDevice *_device;
    CDUnknownBlockType _invalidationHandler;
    NSDate *_pauseDate;
    long long _cachingMode;
    long long _updatingMode;
    long long _animationMode;
    long long _effectiveFaceDataMode;
}

@property (nonatomic, readonly) NTKComplication *complication;
@property (nonatomic, readonly) long long complicationFamily;
@property (nonatomic, readonly) CLKDevice *device;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (weak, nonatomic, readonly) id <NTKComplicationDisplay> legacyDisplay;
@property (retain, nonatomic) NSDate *pauseDate;
@property (nonatomic) _Bool showsLockedUI;
@property (nonatomic, getter=isFaceZooming) _Bool faceZooming;
@property (nonatomic, readonly) long long cachingMode;
@property (nonatomic, readonly) long long updatingMode;
@property (nonatomic, readonly) long long animationMode;
@property (nonatomic, readonly) long long effectiveFaceDataMode;

+ (_Bool)_isLegacy;
+ (id)DEPRECATEDControllerForComplication:(id)arg1 withLegacyDisplay:(id)arg2 forDevice:(id)arg3;
+ (id)controllerForComplication:(id)arg1 withRequestedFamily:(long long)arg2 face:(id)arg3 slot:(id)arg4;
+ (_Bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
+ (Class)controllerClassForComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;
+ (_Bool)_acceptsComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;

- (void)dealloc;
- (void)_activate;
- (void)activate;
- (void)deactivate;
- (void)_deactivate;
- (_Bool)hasTapAction;
- (id)complicationApplicationIdentifier;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (void)didTouchDownInView:(id)arg1;
- (void)didTouchUpInsideView:(id)arg1;
- (void)performTapAction;
- (void)removeDisplayWrapper:(id)arg1;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (void)performBackgroundDataRefresh;
- (void)addDisplayWrapper:(id)arg1;
- (_Bool)wantsLegacyDisplay;
- (Class)richComplicationDisplayViewClass;
- (void)_openAppWithURL:(id)arg1;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)enumerateDisplayWrappersWithBlock:(CDUnknownBlockType)arg1;
- (void)DEPRECATEDInvalidate;
- (void)notifyDelegateOnTimelineChangeWithTritiumUpdatePriority:(long long)arg1;
- (void)_applyCachingMode;
- (void)_applyUpdatingMode;
- (void)_applyAnimationMode;
- (void)_updateIsComplicationActive:(_Bool)arg1;
- (id)_initWithComplication:(id)arg1 legacyDisplay:(id)arg2 forDevice:(id)arg3;
- (void)_updateEffectiveFaceDataMode;
- (void)_updateEffectiveCachingMode;
- (void)_updateEffectiveUpdatingMode;
- (void)_updateEffectiveAnimationMode;
- (void)_updateInternalModes:(_Bool)arg1;
- (void)_openApp:(id)arg1 withURL:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)handleFaceDefaultsChanged;

@end
