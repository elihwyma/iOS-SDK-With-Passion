/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface CKDetailsCell : UITableViewCell

{
    _Bool _indentTopSeperator;
    _Bool _indentBottomSeperator;
    UIView *_topSeperator;
    UIView *_bottomSeperator;
}

@property (retain, nonatomic) UIView *topSeperator;
@property (retain, nonatomic) UIView *bottomSeperator;
@property (nonatomic) _Bool indentTopSeperator;
@property (nonatomic) _Bool indentBottomSeperator;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
