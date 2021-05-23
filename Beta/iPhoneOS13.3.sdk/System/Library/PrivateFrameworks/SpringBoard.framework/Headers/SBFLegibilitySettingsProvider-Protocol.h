/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class _UILegibilitySettings;

@protocol SBFLegibilitySettingsProviderDelegate;

@protocol SBFLegibilitySettingsProvider <Swift>

@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (weak, nonatomic) id <SBFLegibilitySettingsProviderDelegate> delegate;

@end
