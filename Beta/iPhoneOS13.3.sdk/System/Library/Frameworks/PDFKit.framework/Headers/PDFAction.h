/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSString, PDFActionPrivate;

@interface PDFAction : NSObject

{
    PDFActionPrivate *_private;
}

@property (nonatomic, readonly) NSString *type;

+ (id)actionWithActionDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;
+ (Class)_classForActionDictionary:(struct CGPDFDictionary *)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setType:(id)arg1;
- (void)commonInit;
- (id)toolTip;
- (struct __CFDictionary *)createDictionaryRef;
- (id)nextActions;
- (id)initWithActionDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (void)_setNextAction:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (void)_setNextActions:(struct CGPDFArray *)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (id)toolTipNoLabel;
- (void)_setNextActions:(id)arg1;
- (id)baseURLForDocument:(id)arg1;

@end
