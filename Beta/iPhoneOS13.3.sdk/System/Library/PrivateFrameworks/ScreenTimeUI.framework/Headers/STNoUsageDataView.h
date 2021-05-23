/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface STNoUsageDataView : UIView

{
    _Bool _localDevice;
    UILabel *_noDataDetailTextLabel;
}

@property (nonatomic, readonly) UILabel *noDataDetailTextLabel;
@property (nonatomic, getter=isLocalDevice) _Bool localDevice;

- (id)initWithPreferredFontTextStyle:(id)arg1;

@end
