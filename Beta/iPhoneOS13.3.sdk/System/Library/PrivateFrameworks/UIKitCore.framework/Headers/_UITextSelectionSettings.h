/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISettings.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface _UITextSelectionSettings : _UISettings

{
    double _minPinkWidth;
    double _maxPinkWidth;
    double _pinkWidthFactor;
    double _linear;
    double _parabolic;
    double _gain;
    double _allowableSeparation;
    double _allowableForceMovement;
    NSNumber *_shouldUseAcceleration;
    NSNumber *_shouldPreferEndOfWord;
    NSNumber *_allowExtendingSelections;
    NSNumber *_enableDeepPress;
}

@property (nonatomic) double minPinkWidth;
@property (nonatomic) double maxPinkWidth;
@property (nonatomic) double pinkWidthFactor;
@property (nonatomic) double linear;
@property (nonatomic) double parabolic;
@property (nonatomic) double gain;
@property (nonatomic) double allowableSeparation;
@property (nonatomic) double allowableForceMovement;
@property (retain, nonatomic) NSNumber *shouldUseAcceleration;
@property (retain, nonatomic) NSNumber *shouldPreferEndOfWord;
@property (retain, nonatomic) NSNumber *allowExtendingSelections;
@property (retain, nonatomic) NSNumber *enableDeepPress;

+ (id)sharedInstance;

- (void)dealloc;
- (void)setDefaultValues;

@end
