/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFActivityItemProvider.h>

@class NSString, _SFQuickLookDocument;

@interface _SFDownloadActivityItemProvider : _SFActivityItemProvider

{
    _SFQuickLookDocument *_quickLookDocument;
}

@property (retain, nonatomic) _SFQuickLookDocument *quickLookDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)item;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewControllerApplicationExtensionItem:(id)arg1;
- (id)pageTitle;
- (id)initWithQuickLookDocument:(id)arg1 URL:(id)arg2 webView:(id)arg3;

@end
