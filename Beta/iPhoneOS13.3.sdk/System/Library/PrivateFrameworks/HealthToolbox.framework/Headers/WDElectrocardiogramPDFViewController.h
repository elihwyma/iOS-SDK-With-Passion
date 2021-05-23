/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UIViewController.h>

@class NSData, NSDate, NSString, PDFDocument, PDFView;

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramPDFViewController : UIViewController

{
    NSData *_pdfData;
    NSDate *_sampleDate;
    PDFDocument *_pdfDocument;
}

@property (nonatomic, readonly) NSData *pdfData;
@property (nonatomic, readonly) NSDate *sampleDate;
@property (nonatomic, readonly) PDFDocument *pdfDocument;
@property (nonatomic, readonly) PDFView *pdfView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didTapDone;
- (void)didTapShare;
- (unsigned long long)overrideMask;
- (id)initWithPDFData:(id)arg1 sampleDate:(id)arg2;

@end
