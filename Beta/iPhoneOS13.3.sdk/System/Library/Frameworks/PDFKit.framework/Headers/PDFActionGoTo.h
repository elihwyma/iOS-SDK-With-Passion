/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <PDFKit/PDFAction.h>

@class PDFActionGoToPrivateVars, PDFDestination;

@interface PDFActionGoTo : PDFAction

{
    PDFActionGoToPrivateVars *_private2;
}

@property (retain, nonatomic) PDFDestination *destination;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)commonInit;
- (id)initWithDestination:(id)arg1;
- (id)toolTip;
- (const struct __CFDictionary *)createDictionaryRef;
- (void)addDestinationToDictionaryRef:(struct __CFDictionary *)arg1;
- (id)initWithActionDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (id)toolTipNoLabel;

@end
