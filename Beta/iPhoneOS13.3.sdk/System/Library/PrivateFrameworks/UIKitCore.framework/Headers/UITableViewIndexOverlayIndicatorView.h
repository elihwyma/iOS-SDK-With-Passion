/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UILabel, UITableView, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UITableViewIndexOverlayIndicatorView : UIView

{
    UILabel *_label;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UITableView *_table;
}

@property (copy, nonatomic) NSString *currentText;

- (void)layoutSubviews;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (void)_tapGestureChanged:(id)arg1;
- (id)initWithTable:(id)arg1;

@end
