/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface HKViewTableViewCell : UITableViewCell

{
    UIView *_hostedView;
}

@property (nonatomic, readonly) UIView *hostedView;

- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setHostedView:(id)arg1;
- (void)_pinViewToContent:(id)arg1;

@end
