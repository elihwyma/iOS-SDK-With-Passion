/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKDigitalTimeLabel.h>

@class NSHashTable, UIColor;

@interface NTKVictoryTimeLabel : NTKDigitalTimeLabel

{
    UIColor *_outlineColor;
    double _outlineAlpha;
    double _additionalPaddingInsets;
    NSHashTable *_labels;
}

@property (nonatomic) double additionalPaddingInsets;
@property (retain, nonatomic) NSHashTable *labels;
@property (retain, nonatomic) UIColor *outlineColor;
@property (nonatomic) double outlineAlpha;

- (id)_newUnderlyingLabel:(_Bool)arg1;
- (id)initWithTimeLabelOptions:(unsigned long long)arg1 forDevice:(id)arg2 additionalPaddingInsets:(double)arg3;

@end
