/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDRun.h>

@class WDAnnotationData, WDCharacterRun;

__attribute__((visibility("hidden")))
@interface WDAnnotation : WDRun

{
    int mType;
    WDCharacterRun *mReference;
    _Bool mReferencePopertiesFixed;
    WDAnnotationData *mData;
    WDAnnotation *mOtherEndOfRangedAnnotation;
    _Bool isResolved;
    WDAnnotation *parent;
}

@property _Bool isResolved;
@property WDAnnotation *parent;

- (id)description;
- (id)date;
- (id)data;
- (void)setOwner:(id)arg1;
- (id)owner;
- (id)text;
- (void)setDate:(id)arg1;
- (id)reference;
- (int)annotationType;
- (int)runType;
- (_Bool)referencePropertiesFixed;
- (void)setReferencePropertiesFixed;
- (void)setOtherEndOfRangedAnnotation:(id)arg1;
- (void)useDataFromOtherEnd;
- (id)otherEndOfRangedAnnotation;
- (id)initWithParagraph:(id)arg1 type:(int)arg2;
- (id)paragraphIds;
- (unsigned long long)lastParagraphId;

@end
