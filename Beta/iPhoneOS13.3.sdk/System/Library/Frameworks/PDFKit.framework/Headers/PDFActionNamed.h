/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <PDFKit/PDFAction.h>

@class PDFActionNamedPrivateVars;

@interface PDFActionNamed : PDFAction

{
    PDFActionNamedPrivateVars *_private2;
}

@property (nonatomic) long long name;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(long long)arg1;
- (void)commonInit;
- (id)toolTip;
- (const struct __CFDictionary *)createDictionaryRef;
- (void)addNameToDictionaryRef:(struct __CFDictionary *)arg1;
- (id)initWithActionDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;

@end
