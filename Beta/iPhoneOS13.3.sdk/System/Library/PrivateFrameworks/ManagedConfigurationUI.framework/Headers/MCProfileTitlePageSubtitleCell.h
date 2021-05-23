/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface MCProfileTitlePageSubtitleCell : UITableViewCell

{
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateProgressWithTranslationDistance:(double)arg1 referenceDistance:(double)arg2 isScrolling:(_Bool)arg3;
- (void)_updateConstraintsWithLabel:(id)arg1;

@end
