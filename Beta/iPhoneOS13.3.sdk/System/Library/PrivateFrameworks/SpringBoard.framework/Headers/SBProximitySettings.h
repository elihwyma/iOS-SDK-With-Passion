/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBUISettings.h>

@interface SBProximitySettings : SBUISettings

{
    double _initialBacklightDebounceDuration;
    double _subsequentBacklightDebounceDuration;
}

@property (nonatomic) double initialBacklightDebounceDuration;
@property (nonatomic) double subsequentBacklightDebounceDuration;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
