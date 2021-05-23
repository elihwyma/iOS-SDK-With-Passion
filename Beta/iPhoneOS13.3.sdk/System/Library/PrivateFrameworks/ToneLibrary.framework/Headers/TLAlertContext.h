/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_source;

@interface TLAlertContext : NSObject

{
    _Bool _beingInterrupted;
    long long _playbackBackEnd;
    NSObject<OS_dispatch_source> *_timeoutTimerSource;
}

@property (nonatomic) long long playbackBackEnd;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimerSource;
@property (nonatomic, getter=isBeingInterrupted) _Bool beingInterrupted;

@end
