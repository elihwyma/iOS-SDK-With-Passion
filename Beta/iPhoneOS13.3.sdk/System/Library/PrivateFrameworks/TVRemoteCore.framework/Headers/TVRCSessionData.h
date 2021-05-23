/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface TVRCSessionData : NSObject

{
    _Bool _usedRTI;
    _Bool _usedSiri;
    _Bool _requiredPairing;
    _Bool _directionalControlsEnabled;
    NSDate *_sessionStartTime;
    NSString *_launchContextDesc;
}

@property (retain, nonatomic) NSDate *sessionStartTime;
@property (nonatomic) _Bool usedRTI;
@property (nonatomic) _Bool usedSiri;
@property (nonatomic) _Bool requiredPairing;
@property (nonatomic) _Bool directionalControlsEnabled;
@property (copy, nonatomic) NSString *launchContextDesc;

@end
