/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <UIKit/UIViewController.h>

@class PDFView, UIView;

__attribute__((visibility("hidden")))
@interface PDFPasswordViewController : UIViewController

{
    UIView *_passwordView;
    PDFView *_pdfView;
}

- (void)_commonInit;
- (void)loadView;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (void)setPDFView:(id)arg1;

@end
