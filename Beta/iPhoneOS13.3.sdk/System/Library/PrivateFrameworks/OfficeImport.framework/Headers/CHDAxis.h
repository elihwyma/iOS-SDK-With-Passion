/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class CHDTitle, EDResources, NSArray, NSString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDAxis : NSObject

{
    _Bool mReverseOrder;
    _Bool mReverseOrderOverridden;
    _Bool mSecondary;
    _Bool mDateTimeFormattingFlag;
    _Bool mLineVisible;
    _Bool mDeleted;
    _Bool mAutoMinimumValue;
    _Bool mAutoMaximumValue;
    _Bool mAutoCrossValue;
    _Bool mContentFormatDerived;
    int mAxisId;
    unsigned long long mContentFormatId;
    unsigned long long mFontIndex;
    double mScalingMaximum;
    double mScalingMinimum;
    int mOrientation;
    double mCrossAxisId;
    double mCrossesAt;
    int mMajorTickMark;
    int mMinorTickMark;
    int mAxisPosition;
    int mAxisType;
    int mTickLabelPosition;
    CHDTitle *mTitle;
    OADGraphicProperties *mMinorGridLinesGraphicProperties;
    OADGraphicProperties *mMajorGridLinesGraphicProperties;
    OADGraphicProperties *mAxisGraphicProperties;
    int mCrossBetween;
    int mCrosses;
    double mTickLabelRotation;
    _Bool mIsAutoRotation;
    unsigned long long mTickLabelColorIndex;
    EDResources *mResources;
    NSArray *mLabelEffects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)key;
- (id)title;
- (void)setTitle:(id)arg1;
- (int)orientation;
- (void)setOrientation:(int)arg1;
- (void)setFont:(id)arg1;
- (id)font;
- (_Bool)isDeleted;
- (void)setDeleted:(_Bool)arg1;
- (_Bool)isDate;
- (void)setSecondary:(_Bool)arg1;
- (_Bool)isSecondary;
- (unsigned long long)fontIndex;
- (id)initWithResources:(id)arg1;
- (void)setFontIndex:(unsigned long long)arg1;
- (unsigned long long)contentFormatId;
- (id)contentFormat;
- (int)axisPosition;
- (id)majorGridLinesGraphicProperties;
- (_Bool)isAutoMinimumValue;
- (double)scalingMinimum;
- (_Bool)isAutoMaximumValue;
- (double)scalingMaximum;
- (_Bool)isDateTimeFormattingFlag;
- (void)setAxisId:(int)arg1;
- (void)setAxisType:(int)arg1;
- (void)setAxisPosition:(int)arg1;
- (void)setContentFormatId:(unsigned long long)arg1;
- (void)setLineVisible:(_Bool)arg1;
- (void)setAxisGraphicProperties:(id)arg1;
- (void)setMajorTickMark:(int)arg1;
- (void)setMinorTickMark:(int)arg1;
- (void)setTickLabelPosition:(int)arg1;
- (void)setTickLabelAutoRotation:(_Bool)arg1;
- (void)setTickLabelColorIndex:(unsigned long long)arg1;
- (void)setTickLabelRotationAngle:(double)arg1;
- (void)setMinorGridLinesGraphicProperties:(id)arg1;
- (void)setMajorGridLinesGraphicProperties:(id)arg1;
- (void)setLabelEffects:(id)arg1;
- (void)setReverseOrder:(_Bool)arg1;
- (void)setCrossesAt:(double)arg1;
- (void)setCrossBetween:(int)arg1;
- (void)setScalingMaximum:(double)arg1;
- (void)setScalingMinimum:(double)arg1;
- (_Bool)isReverseOrder;
- (double)crossesAt;
- (int)crossBetween;
- (void)setIsContentFormatDerivedFromDataPoints:(_Bool)arg1;
- (_Bool)isAutoCrossValue;
- (void)adjustAxisPositionForHorizontalChart;
- (int)axisId;
- (int)axisIdForXml;
- (_Bool)isReverseOrderOverridden;
- (void)setReverseOrderOverridden:(_Bool)arg1;
- (_Bool)isLineVisible;
- (_Bool)isHorizontalPosition;
- (id)defaultDateTimeContentFormat;
- (void)setContentFormat:(id)arg1;
- (_Bool)isContentFormatDerivedFromDataPoints;
- (double)crossAxisId;
- (double)crossAxisIdForXml;
- (void)setCrossAxisId:(double)arg1;
- (int)majorTickMark;
- (int)minorTickMark;
- (int)axisType;
- (int)tickLabelPosition;
- (_Bool)isTickLabelVisible;
- (id)minorGridLinesGraphicProperties;
- (id)axisGraphicProperties;
- (int)crosses;
- (void)setCrosses:(int)arg1;
- (void)setDateTimeFormattingFlag:(_Bool)arg1;
- (double)tickLabelRotationAngle;
- (_Bool)isTickLabelAutoRotation;
- (id)labelEffects;
- (unsigned long long)tickLabelColorIndex;
- (id)tickLabelColor;

@end
