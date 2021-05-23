/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, SUICFlamesView, UIButton, UIKeyboardDicationBackground;

@protocol UIDictationViewDisplayDelegate;

@interface UIDictationView : UIView

{
    UIKeyboardDicationBackground *_background;
    UIButton *_endpointButton;
    UIButton *_endpointButtonLandscape;
    int _state;
    _Bool _keyboardInTransition;
    _Bool _automaticAppearanceWasEnabled;
    SUICFlamesView *_flamesView;
    _Bool _showLanguageLabel;
    _Bool _switchingLanguage;
    id <UIDictationViewDisplayDelegate> _displayDelegate;
}

@property (nonatomic) _Bool showLanguageLabel;
@property (nonatomic) _Bool switchingLanguage;
@property (nonatomic) id <UIDictationViewDisplayDelegate> displayDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (struct CGSize)layoutSize;
+ (struct CGSize)viewSize;
+ (id)activeInstance;
+ (Class)dictationViewClass;

- (void)dealloc;
- (void)setState:(int)arg1;
- (_Bool)visible;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)show;
- (struct CGPoint)contentOffset;
- (void)returnToKeyboard;
- (void)applicationWillResignActive;
- (void)highlightEndpointButton;
- (void)finishReturnToKeyboard;
- (void)prepareForReturnToKeyboard;
- (_Bool)drawsOwnBackground;
- (float)audioLevelForFlamesView:(id)arg1;
- (id)endpointButton;
- (struct CGSize)currentScreenSize;
- (void)applicationEnteredBackground;
- (struct CGPoint)positionForShow;
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(struct CGPoint)arg3;
- (struct CGPoint)backgroundOffset;
- (void)keyboardDidShow:(id)arg1;
- (_Bool)isShowing;
- (void)endpointButtonPressed;

@end
