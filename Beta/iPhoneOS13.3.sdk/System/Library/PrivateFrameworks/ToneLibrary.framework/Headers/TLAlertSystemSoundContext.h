/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class NSString, TLAlertPlaybackCompletionContext, TLSystemSound;

@protocol TLAlertPlaybackObserver;

@interface TLAlertSystemSoundContext : NSObject

{
    _Bool _hasPlaybackStarted;
    _Bool _beingInterrupted;
    _Bool _beingDeemphasized;
    _Bool _deemphasized;
    TLSystemSound *_sound;
    TLAlertPlaybackCompletionContext *_playbackCompletionContext;
    id <TLAlertPlaybackObserver> _playbackObserver;
    NSString *_toneIdentifierForDeemphasizingAlert;
}

@property (retain, nonatomic) TLSystemSound *sound;
@property (retain, nonatomic) TLAlertPlaybackCompletionContext *playbackCompletionContext;
@property (weak, nonatomic) id <TLAlertPlaybackObserver> playbackObserver;
@property (nonatomic) _Bool hasPlaybackStarted;
@property (nonatomic, getter=isBeingInterrupted) _Bool beingInterrupted;
@property (copy, nonatomic) NSString *toneIdentifierForDeemphasizingAlert;
@property (nonatomic, getter=isBeingDeemphasized) _Bool beingDeemphasized;
@property (nonatomic, getter=isDeemphasized) _Bool deemphasized;

@end
