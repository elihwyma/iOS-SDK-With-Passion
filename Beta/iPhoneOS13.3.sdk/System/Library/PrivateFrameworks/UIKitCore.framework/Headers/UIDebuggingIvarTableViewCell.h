/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewCell.h>

@class UIDebuggingIvar, UILabel;

__attribute__((visibility("hidden")))
@interface UIDebuggingIvarTableViewCell : UITableViewCell

{
    UIDebuggingIvar *_ivar;
    UILabel *_nameLabel;
    UILabel *_typeLabel;
    UILabel *_valueLabel;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UIDebuggingIvar *ivar;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_prepareConstraints;

@end
