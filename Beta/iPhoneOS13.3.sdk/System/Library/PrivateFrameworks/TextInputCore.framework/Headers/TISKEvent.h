/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class TISKTap;

@interface TISKEvent : NSObject

{
    _Bool _hasTimestamp;
    int _type;
    TISKTap *_tap;
    unsigned long long _order;
}

@property (nonatomic) int type;
@property (retain, nonatomic) TISKTap *tap;
@property (nonatomic) unsigned long long order;
@property (nonatomic) _Bool hasTimestamp;

- (id)description;
- (id)upTouchEvent;
- (id)downTouchEvent;
- (double)touchDownTimestamp;
- (double)touchUpTimestamp;
- (void)reportToSession:(id)arg1;
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;
- (id)init:(int)arg1 order:(long long)arg2;
- (id)init:(int)arg1 order:(long long)arg2 tap:(id)arg3;
- (_Bool)isMissingATouch;
- (_Bool)isValidCandidate:(id)arg1;

@end
