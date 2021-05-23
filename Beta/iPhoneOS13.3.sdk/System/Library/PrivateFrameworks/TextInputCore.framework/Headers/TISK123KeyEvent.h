/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TISKEvent.h>

@interface TISK123KeyEvent : TISKEvent

- (id)description;
- (void)reportToSession:(id)arg1;
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;
- (id)init:(id)arg1 order:(long long)arg2;

@end
