/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/Swift-Protocol.h>

@class _UILegibilitySettings;

@protocol SBFLegibilitySettingsProviderDelegate;

@protocol SBFLegibilitySettingsProvider <Swift>

@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (weak, nonatomic) id <SBFLegibilitySettingsProviderDelegate> delegate;

@end
