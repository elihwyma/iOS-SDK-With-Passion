/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <UIKit/UIActivityViewController.h>

@class ICDocCamDocumentInfoCollection, ICDocCamImageCache;

__attribute__((visibility("hidden")))
@interface DCActivityViewController : UIActivityViewController

{
    _Bool _ignoreAttachmentsForCopyToPasteboard;
    ICDocCamDocumentInfoCollection *_documentInfoCollection;
    ICDocCamImageCache *_imageCache;
}

@property (retain, nonatomic) ICDocCamDocumentInfoCollection *documentInfoCollection;
@property (retain, nonatomic) ICDocCamImageCache *imageCache;
@property (nonatomic) _Bool ignoreAttachmentsForCopyToPasteboard;

- (void)_performActivity:(id)arg1;
- (_Bool)inhibitPDFGenerationForActivityType:(id)arg1;
- (_Bool)writeGalleryPDFDataToPasteboardIfNecessaryForActivity:(id)arg1 documentInfoCollection:(id)arg2;
- (id)activityTypesThatInhibitPDFGeneration;

@end
