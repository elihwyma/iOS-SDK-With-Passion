/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIControl.h>

@class NSString, _SFSettingsAlertItem, _SFSettingsAlertItemBackgroundView;

__attribute__((visibility("hidden")))
@interface _SFSettingsAlertControl : UIControl

{
    _Bool _hidesSeparator;
    _SFSettingsAlertItem *_item;
    _SFSettingsAlertItemBackgroundView *_backgroundView;
    long long _defaultBackgroundMode;
}

@property (weak, nonatomic) _SFSettingsAlertItem *item;
@property (nonatomic) _Bool hidesSeparator;
@property (nonatomic, readonly) _SFSettingsAlertItemBackgroundView *backgroundView;
@property (nonatomic) long long defaultBackgroundMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long backgroundMode;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)_updateBackgroundView;

@end
