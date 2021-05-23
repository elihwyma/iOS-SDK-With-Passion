/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TISKTimestampEvent.h>

@class TIKeyboardLayout;

@interface TISKLayoutSwitchEvent : TISKTimestampEvent

{
    TIKeyboardLayout *_layout;
}

@property (retain, nonatomic) TIKeyboardLayout *layout;

- (id)description;
- (double)touchDownTimestamp;
- (double)touchUpTimestamp;
- (id)init:(double)arg1 layout:(id)arg2 order:(long long)arg3;

@end
