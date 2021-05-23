/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class NSShadow, TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIButtonLayout : TVViewLayout

{
    unsigned long long _type;
    unsigned long long _titleStyle;
    double _cornerRadius;
    VUITextLayout *_titleLayout;
    TVImageLayout *_imageLayout;
    NSShadow *_shadow;
    struct CGPoint _contentMotionTranslation;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long titleStyle;
@property (nonatomic, readonly) double cornerRadius;
@property (retain, nonatomic) VUITextLayout *titleLayout;
@property (retain, nonatomic) TVImageLayout *imageLayout;
@property (retain, nonatomic) NSShadow *shadow;
@property (nonatomic, readonly) struct CGPoint contentMotionTranslation;

+ (id)standardTitleLayoutWithStyle:(unsigned long long)arg1;

- (id)initWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 titleStyle:(unsigned long long)arg2;
- (void)_configurePrimaryButton;
- (void)_configureTextualButton;
- (void)_configureProductSecondaryButton;
- (void)_configureImageButton;
- (void)_configureRoundButton;
- (void)_configureBarButtonItem;

@end
