/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class CHDTrendlineLabel, EDString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDTrendline : NSObject

{
    _Bool mDisplayEquation;
    _Bool mDisplayRSquaredValue;
    double mBackward;
    double mForward;
    double mInterceptYAxis;
    int mPolynomialOrder;
    long long mMovingAveragePeriod;
    int mType;
    OADGraphicProperties *mGraphicProperties;
    CHDTrendlineLabel *mLabel;
    EDString *mName;
}

+ (id)trendline;

- (id)init;
- (id)description;
- (id)name;
- (int)type;
- (void)setType:(int)arg1;
- (void)setName:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)label;
- (double)forward;
- (double)backward;
- (id)graphicProperties;
- (void)setGraphicProperties:(id)arg1;
- (_Bool)isDisplayEquation;
- (void)setDisplayEquation:(_Bool)arg1;
- (_Bool)isDisplayRSquaredValue;
- (void)setDisplayRSquaredValue:(_Bool)arg1;
- (void)setBackward:(double)arg1;
- (void)setForward:(double)arg1;
- (double)interceptYAxis;
- (void)setInterceptYAxis:(double)arg1;
- (int)polynomialOrder;
- (void)setPolynomialOrder:(int)arg1;
- (long long)movingAveragePeriod;
- (void)setMovingAveragePeriod:(long long)arg1;
- (id)defaultNameWithSeriesName:(id)arg1;

@end
