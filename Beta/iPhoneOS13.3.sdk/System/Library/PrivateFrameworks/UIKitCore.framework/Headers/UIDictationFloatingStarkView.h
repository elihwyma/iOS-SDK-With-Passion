/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDictationView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIDimmingView;

__attribute__((visibility("hidden")))
@interface UIDictationFloatingStarkView : UIDictationView <Swift>

{
    UIDimmingView *_dimmingView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setState:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)show;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)returnToKeyboard;
- (void)finishReturnToKeyboard;
- (void)prepareForReturnToKeyboard;
- (struct CGPoint)positionForShow;
- (void)endpointButtonPressed;
- (void)setInputViewsHiddenForDictation:(_Bool)arg1;

@end
