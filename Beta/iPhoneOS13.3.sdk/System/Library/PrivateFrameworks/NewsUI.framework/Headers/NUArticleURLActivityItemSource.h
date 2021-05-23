/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsUI/NUArticleActivityItemSource.h>

@class NSURL;

@interface NUArticleURLActivityItemSource : NUArticleActivityItemSource

{
    NSURL *_articleURL;
}

@property (nonatomic, readonly) NSURL *articleURL;

- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)bodyStringForMailMessage;
- (id)initWithHeadline:(id)arg1 URLModifier:(id)arg2;

@end
