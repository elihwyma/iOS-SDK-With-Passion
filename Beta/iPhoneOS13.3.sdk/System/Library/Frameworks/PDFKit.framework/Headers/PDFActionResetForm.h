/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <PDFKit/PDFAction.h>

@class NSArray, PDFActionResetFormPrivateVars;

@interface PDFActionResetForm : PDFAction

{
    PDFActionResetFormPrivateVars *_private2;
}

@property (copy, nonatomic) NSArray *fields;
@property (nonatomic) _Bool fieldsIncludedAreCleared;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)commonInit;
- (id)toolTip;
- (const struct __CFDictionary *)createDictionaryRef;
- (void)addFlagsToDictionaryRef:(struct __CFDictionary *)arg1;
- (id)initWithActionDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (void)addFieldsToDictionaryRef:(struct __CFDictionary *)arg1;

@end
