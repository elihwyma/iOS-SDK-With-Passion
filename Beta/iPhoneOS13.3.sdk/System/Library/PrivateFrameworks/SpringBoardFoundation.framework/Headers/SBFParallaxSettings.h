/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <UIKit/_UISettings.h>

@interface SBFParallaxSettings : _UISettings

{
    _Bool _slideEnabled;
    _Bool _tiltEnabled;
    _Bool _increaseEnabled;
    long long _slideDirectionX;
    long long _slideDirectionY;
    double _slidePixelsX;
    double _slidePixelsY;
    long long _tiltDirectionX;
    long long _tiltDirectionY;
    double _tiltDegreesX;
    double _tiltDegreesY;
    long long _distanceFromScreen;
    double _slideIncreaseX;
    double _slideIncreaseY;
}

@property _Bool slideEnabled;
@property long long slideDirectionX;
@property long long slideDirectionY;
@property double slidePixelsX;
@property double slidePixelsY;
@property _Bool tiltEnabled;
@property long long tiltDirectionX;
@property long long tiltDirectionY;
@property double tiltDegreesX;
@property double tiltDegreesY;
@property long long distanceFromScreen;
@property _Bool increaseEnabled;
@property double slideIncreaseX;
@property double slideIncreaseY;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
