/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptNativeObject.h>

@class NSString, UIImage;

@interface SUScriptButtonNativeObject : SUScriptNativeObject

{
    _Bool _loading;
    NSString *_subtitle;
    NSString *_styleString;
    NSString *_systemItemString;
}

@property (nonatomic, readonly, getter=isShowingConfirmation) _Bool showingConfirmation;
@property (nonatomic, readonly) int buttonType;
@property (nonatomic, getter=isLoading) _Bool loading;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic, readonly) NSString *systemItemString;
@property (nonatomic) long long tag;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct UIEdgeInsets imageInsets;
@property (nonatomic, readonly, getter=isBackButton) _Bool backButton;
@property (nonatomic, readonly) NSString *styleString;

+ (id)objectWithDefaultButtonForScriptButton:(id)arg1;

- (void)dealloc;
- (void)buttonAction:(id)arg1;
- (id)initWithSystemItemString:(id)arg1;
- (void)configureFromScriptButtonNativeObject:(id)arg1;
- (void)hideConfirmationAnimated:(_Bool)arg1;
- (void)disconnectButtonAction;
- (void)connectButtonAction;
- (void)setStyleFromString:(id)arg1;
- (void)showConfirmationWithTitle:(id)arg1 animated:(_Bool)arg2;

@end
