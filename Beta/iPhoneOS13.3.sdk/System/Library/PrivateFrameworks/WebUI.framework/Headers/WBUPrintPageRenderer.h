/*
 Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

#import <UIPrintPageRenderer.h>

@class NSNumberFormatter, NSString, UIColor, UIFont, UIPrintFormatter;

@protocol WBUPrintPageRendererDelegate;

@interface WBUPrintPageRenderer : UIPrintPageRenderer

{
    NSNumberFormatter *_numberFormatter;
    double _URLWidth;
    NSString *_dateString;
    double _dateWidth;
    double _printWidth;
    struct CGPoint _contentOffset;
    struct CGPoint _footerOffset;
    UIFont *_footerFont;
    UIColor *_footerColor;
    _Bool _printFooter;
    NSString *_URLString;
    UIPrintFormatter *_contentFormatter;
    id <WBUPrintPageRendererDelegate> _delegate;
}

@property (retain, nonatomic) NSString *URLString;
@property (retain, nonatomic) UIPrintFormatter *contentFormatter;
@property (nonatomic) _Bool printFooter;
@property (weak, nonatomic) id <WBUPrintPageRendererDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)printInteractionControllerParentViewController:(id)arg1;
- (void)printInteractionControllerWillStartJob:(id)arg1;
- (void)printInteractionControllerDidFinishJob:(id)arg1;
- (void)drawFooterForPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;

@end
