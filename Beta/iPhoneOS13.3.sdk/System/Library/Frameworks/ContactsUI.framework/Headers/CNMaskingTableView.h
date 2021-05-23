/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITableView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface CNMaskingTableView : UITableView

{
    double _maskingInset;
    UIView *_tableMaskView;
}

@property (retain, nonatomic) UIView *tableMaskView;
@property (nonatomic) double maskingInset;

@end
