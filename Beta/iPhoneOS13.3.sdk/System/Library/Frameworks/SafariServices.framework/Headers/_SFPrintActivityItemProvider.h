/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFActivityItemProvider.h>

@class LPFileMetadata, NSItemProvider, NSString, UIPrintPageRenderer, _SFPrintController;

@interface _SFPrintActivityItemProvider : _SFActivityItemProvider

{
    UIPrintPageRenderer *_printPageRenderer;
    NSItemProvider *_pdfItemProvider;
    LPFileMetadata *_linkPreviewFileMetadata;
    _Bool _hasReservedPrintInteractionController;
    _Bool _canVendPDFRepresentation;
    _SFPrintController *_printController;
}

@property (nonatomic, readonly) _SFPrintController *printController;
@property (nonatomic, readonly) _Bool hasReservedPrintInteractionController;
@property (nonatomic) _Bool canVendPDFRepresentation;
@property (nonatomic, readonly) NSItemProvider *pdfItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)item;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)initWithPrintController:(id)arg1 webView:(id)arg2;

@end
