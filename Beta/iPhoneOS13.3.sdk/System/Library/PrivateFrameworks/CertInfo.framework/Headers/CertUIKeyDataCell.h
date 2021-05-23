/*
 Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <UITableViewCell.h>

@class NSArray, UILabel;

@interface CertUIKeyDataCell : UITableViewCell

{
    UILabel *_keyLabel;
    UILabel *_valueLabel;
    NSArray *_constraints;
}

@property (retain, nonatomic) UILabel *keyLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) NSArray *constraints;

- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)_setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setupConstraints;

@end
