/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HealthUI/HKViewController.h>

@class NSData, PDFDocument;

@interface HRPDFViewController : HKViewController

{
    NSData *_pdfData;
    PDFDocument *_pdfDocument;
}

@property (retain, nonatomic) NSData *pdfData;
@property (retain, nonatomic) PDFDocument *pdfDocument;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithPDFData:(id)arg1;
- (id)pdfView;

@end
