/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsUI/NUArticleActivityItemSource.h>

@class NSString;

@interface NUArticleTextActivityItemSource : NUArticleActivityItemSource

{
    NSString *_itemTitle;
}

@property (nonatomic, readonly) NSString *itemTitle;

- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)initWithHeadline:(id)arg1;

@end
