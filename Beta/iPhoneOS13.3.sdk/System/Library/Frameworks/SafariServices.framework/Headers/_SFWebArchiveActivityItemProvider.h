/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFActivityItemProvider.h>

@class LPFileMetadata, _SFWebArchiveProvider;

@interface _SFWebArchiveActivityItemProvider : _SFActivityItemProvider

{
    _SFWebArchiveProvider *_webArchiveProvider;
    LPFileMetadata *_linkPreviewFileMetadata;
}

- (id)item;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)_webArchiveItemProvider;
- (id)initWithWebArchiveProvider:(id)arg1;

@end
