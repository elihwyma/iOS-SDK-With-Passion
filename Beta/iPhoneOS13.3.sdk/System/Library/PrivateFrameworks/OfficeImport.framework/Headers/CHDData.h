/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class CHDDataValuesCollection, CHDFormula, EDResources;

__attribute__((visibility("hidden")))
@interface CHDData : NSObject

{
    CHDDataValuesCollection *mDataValues;
    CHDFormula *mFormula;
    unsigned long long mContentFormatId;
    unsigned long long mDataValueIndexCount;
    EDResources *mResources;
}

+ (id)dataWithDataPointCount:(unsigned long long)arg1 resources:(id)arg2;
+ (id)dataWithResources:(id)arg1;

- (id)description;
- (_Bool)isEmpty;
- (id)initWithResources:(id)arg1;
- (unsigned long long)contentFormatId;
- (id)contentFormat;
- (id)dataValues;
- (id)formula;
- (void)setContentFormatId:(unsigned long long)arg1;
- (void)setFormula:(id)arg1 chart:(id)arg2;
- (void)setDataValueIndexCount:(unsigned long long)arg1;
- (void)setContentFormat:(id)arg1;
- (id)initWithDataPointCount:(unsigned long long)arg1 resources:(id)arg2;
- (unsigned long long)countOfCellsBeingReferenced;
- (unsigned long long)dataValueIndexCount;
- (struct CGPoint)minMaxValues;
- (unsigned long long)averageDataPointDecimalCount;
- (id)firstValueContentFormatWithWorkbook:(id)arg1;

@end
