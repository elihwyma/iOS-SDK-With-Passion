/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <PDFKit/PDFAction.h>

@class NSURL, PDFActionRemoteGoToPrivateVars;

@interface PDFActionRemoteGoTo : PDFAction

{
    PDFActionRemoteGoToPrivateVars *_private2;
}

@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) struct CGPoint point;
@property (copy, nonatomic) NSURL *URL;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)commonInit;
- (id)toolTip;
- (const struct __CFDictionary *)createDictionaryRef;
- (void)addDestinationToDictionaryRef:(struct __CFDictionary *)arg1;
- (id)initWithActionDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (id)toolTipNoLabel;
- (id)initWithPageIndex:(unsigned long long)arg1 atPoint:(struct CGPoint)arg2 fileURL:(id)arg3;

@end
