/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <PrototypeTools/PTSettings.h>

@interface CSHorizontalScrollFailureRecognizerSettings : PTSettings

{
    _Bool _enabled;
    _Bool _viewDebugArea;
    unsigned long long _maxAllowableVerticalOffset;
    double _topAngle;
    double _bottomAngle;
}

@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool viewDebugArea;
@property (nonatomic) unsigned long long maxAllowableVerticalOffset;
@property (nonatomic) double topAngle;
@property (nonatomic) double bottomAngle;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
