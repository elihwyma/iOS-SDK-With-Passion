/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSString, UIImage, UIView;

@protocol SFSettingsAlertItemView;

@interface _SFSettingsAlertItem : NSObject

{
    _Bool _enabled;
    long long _type;
    NSString *_title;
    NSAttributedString *_attributedTitle;
    NSString *_textStyle;
    UIImage *_icon;
    CDUnknownBlockType _handler;
    UIView<SFSettingsAlertItemView> *_view;
    id _controller;
    CDUnknownBlockType _viewConfigurationBlock;
    UIView *_customView;
    NSArray *_subItems;
    _SFSettingsAlertItem *_group;
}

@property (weak, nonatomic) UIView<SFSettingsAlertItemView> *view;
@property (retain, nonatomic) id controller;
@property (copy, nonatomic) CDUnknownBlockType viewConfigurationBlock;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSString *textStyle;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (retain, nonatomic) UIView *customView;
@property (copy, nonatomic) NSArray *subItems;
@property (weak, nonatomic, readonly) _SFSettingsAlertItem *group;
@property (nonatomic, readonly) long long type;
@property (nonatomic) _Bool enabled;

+ (id)buttonWithAttributedTitle:(id)arg1 textStyle:(id)arg2 icon:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)buttonWithTitle:(id)arg1 textStyle:(id)arg2 icon:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)stepperWithController:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)optionsGroupWithTitle:(id)arg1 controller:(id)arg2;
+ (id)itemWithCustomView:(id)arg1;

- (id)initWithType:(long long)arg1;
- (void)updateOptionsGroupDetailLabel;

@end
