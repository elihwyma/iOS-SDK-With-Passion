/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class HUTappableTextView, NSArray, UILabel;

@protocol HFStringGenerator;

@interface HUItemTableSectionHeaderFooterView : UITableViewHeaderFooterView

{
    id <HFStringGenerator> _message;
    HUTappableTextView *_messageTextView;
    unsigned long long _type;
    NSArray *_constraints;
    struct UIEdgeInsets _indentationInset;
}

@property (retain, nonatomic) HUTappableTextView *messageTextView;
@property (retain, nonatomic) NSArray *constraints;
@property (copy, nonatomic) id <HFStringGenerator> message;
@property (nonatomic) unsigned long long type;
@property (nonatomic) struct UIEdgeInsets indentationInset;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, readonly) UILabel *detailTextLabel;

+ (_Bool)requiresConstraintBasedLayout;
+ (id)defaultAttributesForType:(unsigned long long)arg1;

- (void)prepareForReuse;
- (void)updateConstraints;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithReuseIdentifier:(id)arg1;
- (_Bool)_updateViewContent;
- (id)initWithReuseIdentifier:(id)arg1 type:(unsigned long long)arg2;

@end
