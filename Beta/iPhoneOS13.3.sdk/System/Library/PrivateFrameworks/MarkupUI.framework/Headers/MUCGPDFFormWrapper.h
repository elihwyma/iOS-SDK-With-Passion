/*
 Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUCGPDFFormWrapper : NSObject

{
    struct CGPDFForm *_pdfForm;
}

@property (readonly) struct CGPDFForm *pdfForm;

- (void)dealloc;
- (id)initWithForm:(struct CGPDFForm *)arg1;

@end
