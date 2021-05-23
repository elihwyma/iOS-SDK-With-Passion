/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUICardSnippetViewController.h>

@class NSExtension, SAUISnippet, SiriUISashItem;

@interface SiriUISnippetExtensionCardSnippetViewController : SiriUICardSnippetViewController

{
    SAUISnippet *_snippet;
    SiriUISashItem *_sashItem;
    NSExtension *_extension;
}

@property (retain, nonatomic) NSExtension *extension;

+ (void)initialize;

- (id)snippet;
- (void)setSnippet:(id)arg1;
- (void)_cancelTouchesIfNecessary;
- (void)_resumeTouchesIfNecessary;
- (id)sashItem;
- (id)initWithSnippet:(id)arg1 extension:(id)arg2;

@end
