/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class HKDisplayTypeContextView, NSArray, NSString;

@protocol HKDisplayTypeContextTableViewCellDelegate;

@interface HKDisplayTypeContextTableViewCell : UITableViewCell

{
    HKDisplayTypeContextView *_contextView;
    NSArray *_displayTypeContextItems;
    id <HKDisplayTypeContextTableViewCellDelegate> _delegate;
}

@property (copy, nonatomic) NSArray *displayTypeContextItems;
@property (weak, nonatomic) id <HKDisplayTypeContextTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupView;
- (void)selectItemAtIndex:(long long)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
- (void)contextView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)contextView:(id)arg1 didDeselectItemAtIndex:(long long)arg2;
- (void)contextView:(id)arg1 didTapOnInfoButtonAtIndex:(long long)arg2;

@end
