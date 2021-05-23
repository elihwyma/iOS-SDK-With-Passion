/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@interface CPRMListItem : NSObject

{
    struct CGPDFNode **_paragraphs;
    unsigned long long _count;
    unsigned long long _pos;
}

@property (readonly) struct CGPDFNode **paragraphNodes;
@property (readonly) struct CGPDFPage *page;

- (void)dealloc;
- (id)initWithCount:(unsigned long long)arg1;
- (struct CGRect)bounds;
- (void)addParagraph:(struct CGPDFNode *)arg1;

@end
