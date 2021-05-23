/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class NSString, _SFSettingsAlertItem, _SFSettingsAlertItemBackgroundView;

__attribute__((visibility("hidden")))
@interface _SFSettingsAlertCustomViewContainer : UIView

{
    _SFSettingsAlertItemBackgroundView *_backgroundView;
    _Bool _hidesSeparator;
    UIView *_contentView;
    _SFSettingsAlertItem *_item;
    long long _defaultBackgroundMode;
}

@property (nonatomic, readonly) UIView *contentView;
@property (weak, nonatomic) _SFSettingsAlertItem *item;
@property (nonatomic) _Bool hidesSeparator;
@property (nonatomic) long long defaultBackgroundMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long backgroundMode;

- (id)initWithContentView:(id)arg1;

@end
