/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TISKInputEvent.h>

@interface TISKCharKeyEvent : TISKInputEvent

{
    _Bool _isShortWord;
    long long _wordPosition;
}

@property (nonatomic) long long wordPosition;
@property (nonatomic) _Bool isShortWord;

- (id)description;
- (void)reportToSession:(id)arg1;
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;
- (id)init:(id)arg1 order:(long long)arg2;
- (long long)_metricWordKeyPostion:(long long)arg1;

@end
