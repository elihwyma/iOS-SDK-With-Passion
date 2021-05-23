/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TISKEvent.h>

@class TIKeyboardCandidate, TIKeyboardTouchEvent;

@interface TISKPathEvent : TISKEvent

{
    TIKeyboardCandidate *_candidate;
    TIKeyboardTouchEvent *_pathTouchUp;
}

- (id)description;
- (void)reportToSession:(id)arg1;
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;
- (_Bool)isMissingATouch;
- (id)init:(id)arg1 candidate:(id)arg2 order:(long long)arg3;

@end
