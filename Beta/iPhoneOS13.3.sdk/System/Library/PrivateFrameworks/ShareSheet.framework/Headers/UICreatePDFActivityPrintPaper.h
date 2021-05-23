/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <UIKitCore/UIPrintPaper.h>

@interface UICreatePDFActivityPrintPaper : UIPrintPaper

{
    struct CGSize __paperSize;
}

@property (nonatomic) struct CGSize _paperSize;

- (struct CGSize)paperSize;
- (struct CGRect)printableRect;
- (id)_keywordForPDFMetadata;
- (id)initWithPaperSize:(struct CGSize)arg1;

@end
