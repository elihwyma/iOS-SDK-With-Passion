/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIPrintPageRenderer.h>

@interface HKCDAPDFPrintPageRenderer : UIPrintPageRenderer

{
    struct CGRect _paperRectOverride;
    struct CGRect _printableRectOverride;
}

- (struct CGRect)printableRect;
- (struct CGRect)paperRect;
- (void)drawFooterForPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;
- (id)initWithPaperRect:(struct CGRect)arg1 horizontalMargin:(double)arg2 verticalMargin:(double)arg3;

@end
