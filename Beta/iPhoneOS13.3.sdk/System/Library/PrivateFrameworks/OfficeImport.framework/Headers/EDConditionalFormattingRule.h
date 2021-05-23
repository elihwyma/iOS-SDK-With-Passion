/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDResources, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface EDConditionalFormattingRule : NSObject

{
    EDResources *mResources;
    int mType;
    int mOperator;
    NSMutableArray *mFormulas;
    unsigned long long mDifferentialStyleIndex;
    _Bool mStopIfTrue;
    _Bool mAppliesToDateOnly;
    long long mPriority;
    _Bool mAboveAverage;
    _Bool mBottom;
    _Bool mEqualAverage;
    _Bool mPercent;
    unsigned long long mRank;
    long long mStdDev;
    NSString *mText;
    int mTimePeriod;
}

+ (id)conditionalFormattingRuleWithResources:(id)arg1;

- (id)description;
- (int)type;
- (void)setType:(int)arg1;
- (long long)priority;
- (void)setPriority:(long long)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void)setRank:(unsigned long long)arg1;
- (unsigned long long)rank;
- (_Bool)bottom;
- (void)setBottom:(_Bool)arg1;
- (int)timePeriod;
- (void)setTimePeriod:(int)arg1;
- (id)initWithResources:(id)arg1;
- (void)setPercent:(_Bool)arg1;
- (_Bool)percent;
- (unsigned long long)formulaCount;
- (id)formulaAtIndex:(unsigned long long)arg1;
- (void)setStopIfTrue:(_Bool)arg1;
- (void)setOperatorEnum:(int)arg1;
- (void)addFormula:(id)arg1 worksheet:(id)arg2;
- (void)setDifferentialStyle:(id)arg1;
- (id)differentialStyle;
- (_Bool)appliesToDateOnly;
- (long long)compareToOtherRuleUsingPriority:(id)arg1;
- (int)operatorEnum;
- (_Bool)stopIfTrue;
- (_Bool)aboveAverage;
- (_Bool)equalAverage;
- (long long)stdDev;
- (void)setAppliesToDateOnly:(_Bool)arg1;
- (unsigned long long)differentialStyleIndex;
- (void)setDifferentialStyleIndex:(unsigned long long)arg1;
- (void)setAboveAverage:(_Bool)arg1;
- (void)setEqualAverage:(_Bool)arg1;
- (void)setStdDev:(long long)arg1;

@end
