/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NAValueThrottler;

@interface HUControlInteractionState : NSObject

{
    _Bool _userInteractionActive;
    _Bool _writesInProgressOrPossible;
    NAValueThrottler *_writeThrottler;
    unsigned long long _inFlightWriteCount;
}

@property (retain, nonatomic) NAValueThrottler *writeThrottler;
@property (nonatomic) unsigned long long inFlightWriteCount;
@property (nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive;
@property (nonatomic, getter=areWritesInProgressOrPossible) _Bool writesInProgressOrPossible;

@end
