/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STUsageCell.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface STNotificationUsageCell : STUsageCell

{
    UIImageView *_notificationDot;
}

@property (nonatomic, readonly) UIImageView *notificationDot;

- (void)setValue:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
