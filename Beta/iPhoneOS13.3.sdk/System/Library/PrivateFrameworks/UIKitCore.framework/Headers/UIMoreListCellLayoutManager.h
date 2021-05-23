/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewCellLayoutManager.h>

__attribute__((visibility("hidden")))
@interface UIMoreListCellLayoutManager : UITableViewCellLayoutManager

{
    double _widestImageWidth;
}

- (double)setWidestImageWidthFromViewControllers:(id)arg1;
- (void)layoutSubviewsOfCell:(id)arg1;
- (struct CGRect)standardLayoutImageViewFrameForCell:(id)arg1 forSizing:(_Bool)arg2;

@end
