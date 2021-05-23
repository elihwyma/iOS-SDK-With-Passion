/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIActivityItemProvider.h>

@class NSSet, NSString, NSURL, WKWebView;

@interface _SFActivityItemProvider : UIActivityItemProvider

{
    NSURL *_url;
    NSString *_pageTitle;
    NSSet *_excludedActivityTypes;
    CDUnknownBlockType _thumbnailHandler;
    WKWebView *_webView;
}

@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *pageTitle;
@property (copy, nonatomic) NSSet *excludedActivityTypes;
@property (copy, nonatomic) CDUnknownBlockType thumbnailHandler;
@property (weak, nonatomic) WKWebView *webView;

- (id)item;
- (void)main;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2 webView:(id)arg3;
- (id)initWithPlaceholderItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3 webView:(id)arg4;

@end
