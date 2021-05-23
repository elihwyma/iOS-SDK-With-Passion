/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UITableViewCell.h>

__attribute__((visibility("hidden")))
@interface SFEditableTableViewCell : UITableViewCell

{
    _Bool _enabled;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;

- (void)tintColorDidChange;
- (id)initWithEnabledState:(_Bool)arg1;
- (void)_updateTextFieldTextColor;

@end
