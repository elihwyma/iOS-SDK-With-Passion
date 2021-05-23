/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

__attribute__((visibility("hidden")))
@interface EMAxisMapper : CMMapper

- (unsigned int)type;
- (id)values;
- (float)unit;
- (id)position;
- (id)label;
- (id)labels;
- (struct CGColor *)textColor;
- (struct CGColor *)strokeColor;
- (float)maxValue;
- (float)strokeWidth;
- (float)minValue;
- (_Bool)isLogarithmic;
- (_Bool)centerLabels;

@end
