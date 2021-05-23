/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPTextLineMaker : NSObject

{
    NSMutableArray *textLines;
}

- (void)dealloc;
- (id)textLines;
- (unsigned int)makeTextLines:(id)arg1;
- (void)splitByGraphic:(id)arg1 with:(struct CPPDFContext *)arg2;
- (void)zOrderSplitLines:(id)arg1;

@end
