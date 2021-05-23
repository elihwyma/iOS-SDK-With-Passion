/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TISKEvent.h>

@class TIKeyboardInput;

@interface TISKInputEvent : TISKEvent

{
    double _downErrorDistance;
    double _upErrorDistance;
    _Bool _canComputeErrorDistance;
    _Bool _ignoreTapData;
    TIKeyboardInput *_input;
}

@property (retain, nonatomic) TIKeyboardInput *input;
@property (nonatomic) _Bool ignoreTapData;

+ (id)makeInputEvent:(id)arg1 order:(long long)arg2 wordSeparator:(id)arg3 accentedLanguage:(_Bool)arg4;

- (id)upTouchEvent;
- (void)reportToSession:(id)arg1;
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;
- (_Bool)isMissingATouch;
- (id)init:(id)arg1 type:(int)arg2 order:(long long)arg3;
- (double)downUpTimeDelta;
- (void)_computeErrorDistance;
- (double)touchDownErrorDistance;
- (double)touchUpErrorDistance;

@end
