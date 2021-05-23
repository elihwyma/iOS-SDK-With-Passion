/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFLayerController, PDFRenderingPropertiesPrivate, PDFView, UIColor;

__attribute__((visibility("hidden")))
@interface PDFRenderingProperties : NSObject

{
    PDFRenderingPropertiesPrivate *_private;
}

@property (weak, nonatomic, setter=setPDFView:) PDFView *pdfView;
@property (weak, nonatomic, setter=setPDFLayerController:) PDFLayerController *pdfLayerController;
@property (nonatomic) long long displayBox;
@property (nonatomic) _Bool shouldAntiAlias;
@property (nonatomic) double greekingThreshold;
@property (nonatomic) long long interpolationQuality;
@property (nonatomic) double lineWidthThreshold;
@property (retain, nonatomic) UIColor *pageColor;
@property (nonatomic) _Bool enablePageShadows;
@property (nonatomic) double screenScaleFactor;
@property (nonatomic) _Bool enableTileUpdates;
@property (nonatomic) _Bool enableBackgroundImages;
@property (nonatomic) _Bool isUsingPDFExtensionView;
@property (nonatomic) struct CGColorSpace *deviceColorSpace;

- (id)init;
- (void)dealloc;
- (void)_notifyPropertyChanged:(long long)arg1;

@end
