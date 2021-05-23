/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewCell.h>

@class UISwitch;

__attribute__((visibility("hidden")))
@interface CKTranscriptDNDCell : UITableViewCell

{
    UISwitch *_muteSwitch;
}

@property (retain, nonatomic) UISwitch *muteSwitch;

+ (id)identifier;
+ (double)preferredHeight;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
