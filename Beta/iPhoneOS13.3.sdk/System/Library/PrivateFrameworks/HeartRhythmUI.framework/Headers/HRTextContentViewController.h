/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HealthUI/HKViewController.h>

@class NSString;

@interface HRTextContentViewController : HKViewController

{
    NSString *_string;
}

@property (copy, nonatomic) NSString *string;

- (id)initWithString:(id)arg1;
- (id)textView;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_attributedStringFromString:(id)arg1;

@end
