/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface WFPDFContentStream : NSObject

{
    struct CGPDFContentStream *_contentStreamRef;
    NSMutableDictionary *_operatorBlocks;
    struct CGPDFOperatorTable *_operatorTableRef;
    NSArray *_textContainers;
}

@property (retain, nonatomic) NSMutableDictionary *operatorBlocks;
@property (nonatomic) struct CGPDFOperatorTable *operatorTableRef;
@property (retain, nonatomic) NSArray *textContainers;
@property (nonatomic, readonly) struct CGPDFContentStream *contentStreamRef;

- (void)dealloc;
- (id)initWithContentStreamRef:(struct CGPDFContentStream *)arg1;
- (id)textInRect:(struct CGRect)arg1;

@end
