/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewCellLayoutManager.h>

@interface EKCalendarChooserCellLayoutManager : UITableViewCellLayoutManager

{
    id _realLayoutManager;
}

+ (id)sharedLayoutManagerForStyle:(long long)arg1;

- (id)defaultTextLabelFontForCell:(id)arg1;
- (double)defaultTextLabelFontSizeForCell:(id)arg1;
- (void)getTextLabelRect:(struct CGRect *)arg1 detailTextLabelRect:(struct CGRect *)arg2 forCell:(id)arg3 rowWidth:(double)arg4 forSizing:(_Bool)arg5;
- (struct CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(_Bool)arg3;
- (double)defaultDetailTextLabelFontSizeForCell:(id)arg1;
- (id)defaultDetailTextLabelFontForCell:(id)arg1;
- (id)detailTextLabelForCell:(id)arg1;
- (struct CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2;
- (id)initWithCellStyle:(long long)arg1;
- (_Bool)rect:(struct CGRect)arg1 trailsOtherRect:(struct CGRect)arg2 byDistance:(double *)arg3;

@end
