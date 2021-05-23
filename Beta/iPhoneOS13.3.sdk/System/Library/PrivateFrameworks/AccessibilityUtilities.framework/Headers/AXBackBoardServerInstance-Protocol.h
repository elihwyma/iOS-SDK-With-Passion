/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <AccessibilityUtilities/Swift-Protocol.h>

@protocol AXBackBoardServerInstance <Swift>

+ (unsigned short)backBoardServerInstanceIfExists;

- (unsigned short)delegate;
- (unsigned short)resetAccessibilityFeatures;
- (unsigned short)_inPreBoardMode;
- (unsigned short)_inCheckerBoardMode;
- (unsigned short)_sessionIsLoginSession;
- (unsigned short)disableBrightnessFilters;
- (unsigned short)brightnessFiltersEnabled;
- (unsigned short)blueLightStatusEnabled;
- (unsigned short)restoreCachedBrightnessFilters;
- (unsigned short)adaptationEnabled;
- (unsigned short)supportsAdaptation;
- (unsigned short)forceLoadGAXBundle;
- (unsigned short)colorFilterFromLastUpdate;

@end
