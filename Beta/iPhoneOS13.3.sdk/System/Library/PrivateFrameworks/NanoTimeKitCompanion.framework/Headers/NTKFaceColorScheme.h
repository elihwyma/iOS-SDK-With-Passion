/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, NSArray, NSMutableDictionary, UIColor;

@interface NTKFaceColorScheme : NSObject

{
    NSMutableDictionary *_colorsByUnit;
    _Bool _containsOverrideFaceColor;
    CLKDevice *_device;
    NSArray *_faceColors;
    double _multicolorAlpha;
    double _siriAlpha;
}

@property (nonatomic) _Bool containsOverrideFaceColor;
@property (retain, nonatomic) NSArray *faceColors;
@property (nonatomic) double multicolorAlpha;
@property (nonatomic) double siriAlpha;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) unsigned long long units;
@property (nonatomic, readonly) UIColor *foregroundColor;
@property (nonatomic, readonly) UIColor *secondaryForegroundColor;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *accentColor;
@property (nonatomic, readonly) UIColor *shiftedForegroundColor;
@property (nonatomic, readonly) UIColor *shiftedBackgroundColor;
@property (nonatomic, readonly) UIColor *stackedImagesForegroundColor;
@property (nonatomic, readonly) UIColor *tickColor;
@property (nonatomic, readonly) UIColor *alternativeTickColor;
@property (nonatomic, readonly) UIColor *activityTickColor;
@property (nonatomic, readonly) UIColor *upNextTextColor;

+ (id)colorSchemeForDevice:(id)arg1 withFaceColor:(unsigned long long)arg2 units:(unsigned long long)arg3;
+ (id)colorSchemeForDevice:(id)arg1 withFaceColor:(unsigned long long)arg2 foregroundColor:(id)arg3 units:(unsigned long long)arg4 alternateHighlight:(_Bool)arg5;
+ (id)interpolationFrom:(id)arg1 to:(id)arg2 fraction:(double)arg3 brightenUnits:(unsigned long long)arg4;
+ (id)interpolationForDevice:(id)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 fraction:(double)arg4 units:(unsigned long long)arg5 brightenUnits:(unsigned long long)arg6 overrideColor:(id)arg7 alternateHighlight:(_Bool)arg8;
+ (id)interpolationFrom:(id)arg1 to:(id)arg2 fraction:(double)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)initForDevice:(id)arg1;
- (void)_setColor:(id)arg1 forUnit:(unsigned long long)arg2;
- (id)_colorForUnit:(unsigned long long)arg1;

@end
