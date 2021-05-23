/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/PreferencesTwoPartValueCell.h>

@class TwoPartTextLabel, UILabel;

@interface PreferencesDoubleTwoPartValueCell : PreferencesTwoPartValueCell

{
    UILabel *_textLabel2;
    TwoPartTextLabel *_twoPartLabel2;
}

@property (retain, nonatomic, readonly) UILabel *textLabel2;
@property (retain, nonatomic, readonly) TwoPartTextLabel *twoPartTextLabel2;

- (void)layoutText:(id)arg1 andValue:(id)arg2;
- (void)checkValueWidths;
- (void)_layoutSubviewsCore;

@end
