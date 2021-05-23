/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class CKTextBalloonView, NSString;

@interface TLKMessageView

{
    NSString *_messageText;
    unsigned long long _messageServiceType;
    unsigned long long _messageStatus;
    CKTextBalloonView *_textBalloonView;
}

@property (retain, nonatomic) CKTextBalloonView *textBalloonView;
@property (retain, nonatomic) NSString *messageText;
@property (nonatomic) unsigned long long messageServiceType;
@property (nonatomic) unsigned long long messageStatus;

- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (void)tlk_updateForAppearance:(id)arg1;
- (_Bool)usesDefaultInsets;

@end
