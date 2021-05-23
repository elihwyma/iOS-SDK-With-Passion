/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@interface CPRMHeading : NSObject

{
    struct CGPDFNode *_node;
    struct CGPDFPage *_page;
    CDStruct_627e0f85 _textRange;
}

@property (readonly) struct CGPDFPage *page;
@property CDStruct_627e0f85 textRange;

- (struct CGRect)bounds;
- (id)initWithNode:(struct CGPDFNode *)arg1 onPage:(struct CGPDFPage *)arg2;

@end
