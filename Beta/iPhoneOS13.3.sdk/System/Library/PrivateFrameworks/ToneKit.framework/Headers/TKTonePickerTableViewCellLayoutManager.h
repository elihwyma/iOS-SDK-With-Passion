/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <UIKit/UITableViewCellLayoutManagerValue1.h>

@interface TKTonePickerTableViewCellLayoutManager : UITableViewCellLayoutManagerValue1

{
    double _minimumTextIndentation;
}

@property (nonatomic) double minimumTextIndentation;

- (struct CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(_Bool)arg3;
- (struct CGRect)_adjustedTextFrameWithOriginalTextFrame:(struct CGRect)arg1 forCell:(id)arg2;

@end
