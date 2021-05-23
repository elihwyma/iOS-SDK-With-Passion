/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <PDFKit/PDFAction.h>

@class NSURL, PDFActionURLPrivateVars;

@interface PDFActionURL : PDFAction

{
    PDFActionURLPrivateVars *_private2;
}

@property (copy, nonatomic) NSURL *URL;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (void)commonInit;
- (id)toolTip;
- (const struct __CFDictionary *)createDictionaryRef;
- (id)initWithActionDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;

@end
