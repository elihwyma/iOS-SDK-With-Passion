/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <PrototypeTools/PTSRow.h>

@interface PTSliderRow : PTSRow

{
    double _minValue;
    double _maxValue;
}

@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;

- (id)init;
- (id)minValue:(double)arg1 maxValue:(double)arg2;

@end
