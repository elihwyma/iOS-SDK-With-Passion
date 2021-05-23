/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@interface MPUCellConfiguration : NSObject

+ (id)reuseIdentifier;
+ (Class)tableViewCellClass;
+ (id)tableViewSeparatorColor;
+ (id)tableViewBackgroundColor;
+ (double)tableViewCellHeight;
+ (void)handleScrollViewDidScrollForCell:(id)arg1 viewController:(id)arg2;
+ (void)handleScrollViewDidScrollForCell:(id)arg1 inScrollView:(id)arg2 viewController:(id)arg3;
+ (void)handleScrollViewDidEndDeceleratingForCell:(id)arg1 viewController:(id)arg2;
+ (void)configureCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned long long)arg4 animated:(_Bool)arg5;
+ (void)configureDownloadStatusForCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned long long)arg4 animated:(_Bool)arg5;
+ (void)configureCellForSizing:(id)arg1;
+ (void)configureCellAfterDeceleration:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned long long)arg4 animated:(_Bool)arg5;
+ (id)mediaEntityPropertiesToFetch;
+ (void)willDisplayCell:(id)arg1 inTableView:(id)arg2 withViewController:(id)arg3 atIndex:(unsigned long long)arg4;
+ (void)didEndDisplayingCell:(id)arg1 withViewController:(id)arg2 atIndex:(unsigned long long)arg3;
+ (struct UIEdgeInsets)tableViewSeparatorInset;
+ (long long)tableViewSeparatorStyle;
+ (id)tableViewCellBackgroundColor;
+ (double)expandedTableViewCellHeight;
+ (_Bool)wantsScrollViewDidScroll;
+ (_Bool)wantsScrollViewDidScrollInScrollView;
+ (_Bool)wantsScrollViewDidEndDecelerating;

@end
