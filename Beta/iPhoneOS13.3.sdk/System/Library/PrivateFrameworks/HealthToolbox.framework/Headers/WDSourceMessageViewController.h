/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKViewController.h>

@class HKSource, UILabel;

__attribute__((visibility("hidden")))
@interface WDSourceMessageViewController : HKViewController

{
    UILabel *_messageLabel;
    HKSource *_source;
    long long _style;
}

@property (nonatomic, readonly) long long style;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)_updateFont;
- (id)initWithStyle:(long long)arg1 source:(id)arg2;

@end
