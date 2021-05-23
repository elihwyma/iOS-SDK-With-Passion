/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

#import <CoreUI/Swift-Protocol.h>

@class NSString;

@interface CUIStyleEffectConfiguration : NSObject <Swift>

{
    long long _state;
    long long _presentationState;
    long long _value;
    unsigned long long _dimension1;
    NSString *_appearanceName;
    _Bool _useSimplifiedEffect;
    _Bool _foregroundColorShouldTintEffects;
    double _brightnessMultiplier;
    double _effectScale;
    unsigned long long _colorTemperature;
}

@property (nonatomic) long long state;
@property (nonatomic) long long presentationState;
@property (nonatomic) long long value;
@property (nonatomic) unsigned long long dimension1;
@property (copy, nonatomic) NSString *appearanceName;
@property (nonatomic) _Bool useSimplifiedEffect;
@property (nonatomic) _Bool foregroundColorShouldTintEffects;
@property (nonatomic) double brightnessMultiplier;
@property (nonatomic) unsigned long long colorTemperature;
@property (nonatomic) double effectScale;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)shouldIgnoreForegroundColor;
- (_Bool)shouldRespectOutputBlending;

@end
