/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsUI/NUArticleActivityItemSource.h>

@class UIImage;

@interface NUArticleImageActivityItemSource : NUArticleActivityItemSource

{
    UIImage *_articleImage;
}

@property (nonatomic, readonly) UIImage *articleImage;

- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)initWithHeadline:(id)arg1;

@end
