/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/Swift-Protocol.h>

@class _UILegibilitySettings;

@protocol SBFLegibilitySettingsProviderDelegate;

@protocol SBFLegibilitySettingsProvider <Swift>

@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (weak, nonatomic) id <SBFLegibilitySettingsProviderDelegate> delegate;

@end
