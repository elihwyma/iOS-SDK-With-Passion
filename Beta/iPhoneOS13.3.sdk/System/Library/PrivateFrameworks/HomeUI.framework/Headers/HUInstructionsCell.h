/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, NSArray, NSString, UILabel, UITextView;

@protocol HUResizableCellDelegate;

@interface HUInstructionsCell : UITableViewCell <Swift>

{
    HFItem *_item;
    double _contentBottomMargin;
    UILabel *_titleLabel;
    UITextView *_descriptionView;
    NSArray *_constraints;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *descriptionView;
@property (retain, nonatomic) NSArray *constraints;
@property (nonatomic) double contentBottomMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)updateUIWithAnimation:(_Bool)arg1;

@end
