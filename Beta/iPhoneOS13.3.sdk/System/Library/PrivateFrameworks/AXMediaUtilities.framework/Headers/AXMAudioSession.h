/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AVAudioSession, NSMutableArray;

@interface AXMAudioSession : NSObject

{
    NSMutableArray *_notificationObserverTokens;
    AVAudioSession *_session;
}

@property (retain, nonatomic) NSMutableArray *notificationObserverTokens;
@property (retain, nonatomic) AVAudioSession *session;

- (id)init;
- (void)dealloc;
- (void)_handleSessionInterrupted:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)_handleRouteChanged:(unsigned long long)arg1 previousRoute:(id)arg2;
- (void)_handleMediaServicesLost;
- (void)_handleMediaServicesReset;
- (void)_handleSilenceSecondaryAudio:(unsigned long long)arg1;
- (id)_stringForRouteChangeReason:(unsigned long long)arg1;
- (_Bool)deactivateSessionWithError:(id *)arg1;
- (_Bool)activateSessionWithError:(id *)arg1;

@end
