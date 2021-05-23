/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCollectionNode.h>

@interface NTKLabelCollectionNode : NTKCollectionNode

{
    _Bool _paddedWithZeros;
    unsigned int _labels;
    unsigned int _start;
    unsigned int _multiple;
    unsigned int _repeat;
    long long _faceStyle;
    long long _font;
    double _fontSize;
    double _color;
    const struct NTKLabelPosition *_positions;
}

@property (nonatomic) long long faceStyle;
@property (nonatomic) unsigned int labels;
@property (nonatomic) unsigned int start;
@property (nonatomic) unsigned int multiple;
@property (nonatomic) unsigned int repeat;
@property (nonatomic) long long font;
@property (nonatomic) double fontSize;
@property (nonatomic) _Bool paddedWithZeros;
@property (nonatomic) double color;
@property (nonatomic) const struct NTKLabelPosition *positions;

+ (void)applyLabelPositions:(const struct NTKLabelPosition *)arg1 toNodes:(id)arg2 forDevice:(id)arg3;
+ (void)applyLabelPosition:(const struct NTKLabelPosition *)arg1 withCenter:(struct CGPoint)arg2 toNode:(id)arg3 forDevice:(id)arg4;
+ (void)applyLabelPositions:(const struct NTKLabelPosition *)arg1 withCenter:(struct CGPoint)arg2 toNodes:(id)arg3 forDevice:(id)arg4;
+ (void)applyLabelPosition:(const struct NTKLabelPosition *)arg1 toNode:(id)arg2 forDevice:(id)arg3;

- (id)initForDevice:(id)arg1;
- (void)updateLabelNodePositions;
- (void)createSubNodes;
- (void)applyAppearanceFraction:(double)arg1 inverted:(_Bool)arg2;
- (void)colorize:(id)arg1;

@end
