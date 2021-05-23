/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

#import <ContentKit/Swift-Protocol.h>

@class UIPrintFormatter, WFPDFDocument;

__attribute__((visibility("hidden")))
@interface WFPDFPrintFormatter : NSObject <Swift>

{
    UIPrintFormatter *_printFormatter;
    WFPDFDocument *_document;
}

@property (nonatomic, readonly) WFPDFDocument *document;
@property (nonatomic, readonly) UIPrintFormatter *printFormatter;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFileRepresentation:(id)arg1;
- (id)initWithPDFDocument:(id)arg1;

@end
