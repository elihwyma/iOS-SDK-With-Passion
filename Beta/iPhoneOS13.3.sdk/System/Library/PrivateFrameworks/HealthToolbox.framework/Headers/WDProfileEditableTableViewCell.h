/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDProfileTableViewCell.h>

__attribute__((visibility("hidden")))
@interface WDProfileEditableTableViewCell : WDProfileTableViewCell

+ (double)notEditingRightEdgeMargin;

- (_Bool)becomeFirstResponder;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)_textFieldDidChange:(id)arg1;

@end
