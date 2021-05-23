/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <TelephonyUI/TPNumberPad.h>

@class NSString, TPDialerSoundController;

@protocol TPDialerKeypadDelegate;

@interface TPDialerNumberPad : TPNumberPad

{
    _Bool _playsSounds;
    id <TPDialerKeypadDelegate> _delegate;
    TPDialerSoundController *_soundController;
}

@property (retain) TPDialerSoundController *soundController;
@property (nonatomic) _Bool playsSounds;
@property id <TPDialerKeypadDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)dialerNumberPadFullCharacters;
+ (id)dialerNumberPadNumericCharacters;

- (void)buttonTapped:(id)arg1;
- (void)buttonDown:(id)arg1;
- (void)buttonUp:(id)arg1;
- (void)highlightKeyAtIndex:(long long)arg1;
- (long long)indexForHighlightedKey;
- (void)buttonUpOutside:(id)arg1;
- (void)buttonLongPressed:(id)arg1;

@end
