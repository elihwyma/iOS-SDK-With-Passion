/*
 Image: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
 */

#import <SearchUI/SearchUISearchField.h>

@class NSArray, NSString, SPSearchEntity, SPUIHeaderBlurView, UIButton, UIImage, UIView;

@protocol SearchUITextFieldDelegate;

@interface SPUITextField : SearchUISearchField

{
    _Bool _ignoreTokensUpdate;
    NSArray *_suggestions;
    UIImage *_clearButtonImage;
    UIButton *_microphoneButton;
    long long _activeInterfaceOrientation;
    SPUIHeaderBlurView *_blurView;
    UIView *_tintView;
    NSString *_lastSearchText;
    SPSearchEntity *_lastSearchEntity;
    struct CGSize _imageSize;
}

@property (retain) NSArray *suggestions;
@property struct CGSize imageSize;
@property (retain) UIImage *clearButtonImage;
@property (retain) UIButton *microphoneButton;
@property long long activeInterfaceOrientation;
@property (retain) SPUIHeaderBlurView *blurView;
@property (retain) UIView *tintView;
@property (readonly) SPSearchEntity *searchEntity;
@property (retain) NSString *lastSearchText;
@property (retain) SPSearchEntity *lastSearchEntity;
@property (retain) id <SearchUITextFieldDelegate> delegate;
@property _Bool ignoreTokensUpdate;

+ (_Bool)_isRTL;
+ (Class)_backgroundViewClass;
+ (id)removeDictationCharacterInString:(id)arg1;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (id)keyCommands;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)updateToken:(id)arg1;
- (void)updateTextRange:(id)arg1;
- (struct CGRect)_microphoneRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_shiftedBoundsForText:(struct CGRect)arg1;
- (void)clearAllTokens;
- (void)escapeKeyCommand;
- (_Bool)needsLandscapeHeight;
- (id)textIncludingTokens;
- (void)updateWithPrimaryColor:(id)arg1 secondaryColor:(id)arg2 isOnDarkBackground:(_Bool)arg3;

@end
