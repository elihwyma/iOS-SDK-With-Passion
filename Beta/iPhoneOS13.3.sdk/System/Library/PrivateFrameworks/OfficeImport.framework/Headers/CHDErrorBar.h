/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class CHDChart, CHDData, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDErrorBar : NSObject

{
    CHDChart *mChart;
    double mValue;
    int mType;
    int mValueType;
    int mDirection;
    _Bool mNoEndCap;
    CHDData *mMinusValues;
    CHDData *mPlusValues;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)errorBarWithChart:(id)arg1;

- (id)description;
- (int)type;
- (void)setType:(int)arg1;
- (double)value;
- (void)setValue:(double)arg1;
- (int)direction;
- (void)setDirection:(int)arg1;
- (int)valueType;
- (void)setValueType:(int)arg1;
- (id)graphicProperties;
- (id)initWithChart:(id)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setNoEndCap:(_Bool)arg1;
- (void)setPlusValues:(id)arg1;
- (void)setMinusValues:(id)arg1;
- (_Bool)isNoEndCap;
- (id)minusValues;
- (id)plusValues;

@end
