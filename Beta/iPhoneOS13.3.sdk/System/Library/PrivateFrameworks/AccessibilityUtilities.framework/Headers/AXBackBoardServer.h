/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <AccessibilityUtilities/AXServer.h>

@class NSMutableArray;

@interface AXBackBoardServer : AXServer

{
    _Bool _overrideGestureRecognition;
    NSMutableArray *_eventListeners;
    NSMutableArray *_zoomAttributeListeners;
}

@property (nonatomic) _Bool invertColorsEnabled;
@property (nonatomic) _Bool inPreboardMode;
@property (nonatomic) _Bool inCheckerBoardMode;

+ (id)server;

- (id)init;
- (void)dealloc;
- (id)_serviceName;
- (unsigned long long)currentGuidedAccessModeAndSessionApp:(id *)arg1;
- (unsigned int)contextIdHostingContextId:(unsigned int)arg1;
- (_Bool)tripleClickHomeButtonPress;
- (void)homeClickSwallowedForGuidedAccess;
- (void)resetAccessibilityFeatures;
- (void)setAccessibilityPreferenceAsMobile:(id)arg1 value:(id)arg2 notification:(id)arg3;
- (id)accessibilityPreferenceAsMobile:(id)arg1;
- (void)sessionIsLoginSessionWithResult:(CDUnknownBlockType)arg1;
- (_Bool)supportsAccessibilityDisplayFilters;
- (_Bool)isGuidedAccessActive;
- (void)_didConnectToServer;
- (void)_willClearServer;
- (_Bool)_shouldDispatchLocally;
- (_Bool)loadGAXBundleForUnmanagedASAM;
- (void)userEventOccurred;
- (void)setLockScreenDimTimerEnabled:(_Bool)arg1;
- (id)_handleEventListener:(id)arg1;
- (void)registerSiriViewServicePID:(int)arg1;
- (void)registerAccessibilityUIServicePID:(int)arg1;
- (void)disableBrightnessFilters;
- (_Bool)brightnessFiltersEnabled;
- (_Bool)blueLightStatusEnabled;
- (void)restoreCachedBrightnessFilters;
- (_Bool)adaptationEnabled;
- (_Bool)supportsAdaptation;
- (struct AXBColorFilterDescription)colorFilterFromLastUpdate;
- (id)backboardServiceInstance;
- (void)setSessionIsLoginSession:(_Bool)arg1;
- (void)registerAssistiveTouchPID:(int)arg1;
- (void)setCapsLockLightOn:(_Bool)arg1;
- (id)_springboardParametersForGuidedAccessAvailability;
- (void)_sendRequestGuidedAccessSessionMessage:(id)arg1 numberOfRetryAttempts:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerGestureConflictWithZoom:(id)arg1;
- (void)adjustSystemZoom:(int)arg1;
- (int)accessibilityAssistiveTouchPID;
- (int)accessibilityUIServicePID;
- (void)postEvent:(id)arg1 afterNamedTap:(id)arg2 includeTaps:(id)arg3;
- (void)postEvent:(id)arg1 systemEvent:(_Bool)arg2;
- (unsigned int)contextIdForPosition:(struct CGPoint)arg1;
- (struct CGRect)convertFrame:(struct CGRect)arg1 fromContextId:(unsigned int)arg2 toContextId:(unsigned int)arg3;
- (struct CGRect)convertFrame:(struct CGRect)arg1 toContextId:(unsigned int)arg2;
- (struct CGRect)convertFrame:(struct CGRect)arg1 fromContextId:(unsigned int)arg2;
- (void)setHearingAidControlIsVisible:(_Bool)arg1;
- (void)setSwitchControlRendersDeviceUnusable:(_Bool)arg1;
- (void)setSwitchControlHasScreenSwitch:(_Bool)arg1;
- (void)setZoomInitialFocusRect:(struct CGRect)arg1 fromContext:(unsigned int)arg2;
- (struct CGRect)zoomInitialFocusRectWithQueryingContext:(unsigned int)arg1;
- (_Bool)isGuidedAccessInWorkspace;
- (id)guidedAccessEffectiveAppBundleIdentifier;
- (void)guidedAccessEffectiveAppBundleIdentifier:(CDUnknownBlockType)arg1;
- (id)performGuidedAccessAutomationCommand:(id)arg1 error:(id *)arg2;
- (unsigned long long)guidedAccessAvailability;
- (void)requestGuidedAccessSessionStartWithConfigurationDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestGuidedAccessSessionEndWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isGuidedAccessSelfLockedToApp:(id)arg1;
- (_Bool)isGuidedAccessUnmanagedSelfLocked;
- (void)toggleGuidedAccess;
- (id)guidedAccessIgnoredRegions;
- (void)jetsamThirdPartyApps;

@end
