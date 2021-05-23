/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, NSTimer;

@protocol SBFBlockStatusProvider;

@interface SBFDeviceBlockTimer : NSObject

{
    _Bool _enabled;
    CDUnknownBlockType _handler;
    NSString *_titleText;
    NSString *_subtitleText;
    id <SBFBlockStatusProvider> _blockStatusProvider;
    NSTimer *_timer;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (retain, nonatomic, setter=_setBlockStatusProvider:) id <SBFBlockStatusProvider> blockStatusProvider;
@property (retain, nonatomic, setter=_setTimer:) NSTimer *timer;
@property (nonatomic, getter=_isEnabled, setter=_setEnabled:) _Bool enabled;
@property (copy, nonatomic) CDUnknownBlockType handler;

- (void)dealloc;
- (void)invalidate;
- (void)start;
- (void)_clearTimer;
- (void)_scheduleTimerIfNecessaryAndUpdateState;
- (id)initWithDeviceBlockStatusProvider:(id)arg1;

@end
