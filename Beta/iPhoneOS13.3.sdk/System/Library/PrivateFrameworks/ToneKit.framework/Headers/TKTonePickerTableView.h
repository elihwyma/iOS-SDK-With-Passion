/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <UIKit/UITableView.h>

@protocol TKTonePickerTableViewLayoutMarginsObserver, TKTonePickerTableViewSeparatorObserver;

@interface TKTonePickerTableView : UITableView

{
    id <TKTonePickerTableViewLayoutMarginsObserver> _layoutMarginsObserver;
    id <TKTonePickerTableViewSeparatorObserver> _separatorObserver;
}

@property (weak, nonatomic) id <TKTonePickerTableViewLayoutMarginsObserver> layoutMarginsObserver;
@property (weak, nonatomic) id <TKTonePickerTableViewSeparatorObserver> separatorObserver;

- (void)layoutSubviews;
- (void)layoutMarginsDidChange;
- (void)setSeparatorColor:(id)arg1;
- (void)_handleSeparatorColorDidChange;

@end
