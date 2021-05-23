/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class CHDFormula, EDResources, EDString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDTrendlineLabel : NSObject

{
    EDResources *mResources;
    CHDFormula *mName;
    unsigned long long mContentFormatId;
    _Bool mContentFormatDerived;
    _Bool mGeneratedText;
    _Bool mAutomaticLabelDeleted;
    OADGraphicProperties *mGraphicProperties;
    EDString *mLastCachedName;
}

@property (retain, nonatomic) EDString *lastCachedName;

+ (id)trendlineLabelWithResources:(id)arg1;

- (id)description;
- (id)name;
- (id)initWithResources:(id)arg1;
- (id)graphicProperties;
- (unsigned long long)contentFormatId;
- (id)contentFormat;
- (void)setContentFormatId:(unsigned long long)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setName:(id)arg1 chart:(id)arg2;
- (void)setIsContentFormatDerivedFromDataPoints:(_Bool)arg1;
- (void)setGeneratedText:(_Bool)arg1;
- (void)setAutomaticLabelDeleted:(_Bool)arg1;
- (void)setContentFormat:(id)arg1;
- (_Bool)isContentFormatDerivedFromDataPoints;
- (_Bool)isGeneratedText;
- (_Bool)isAutomaticLabelDeleted;

@end
