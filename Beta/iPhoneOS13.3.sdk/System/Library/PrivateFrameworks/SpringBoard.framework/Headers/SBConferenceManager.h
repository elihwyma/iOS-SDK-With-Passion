/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class TUCallCenter;

@interface SBConferenceManager : NSObject

{
    _Bool _hasFaceTimeCapability;
    struct MGNotificationTokenStruct *_faceTimeCapabilityUpdateToken;
    TUCallCenter *_sharedCallCenter;
}

+ (void)initialize;
+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)inFaceTime;
- (_Bool)faceTimeInvitationExists;
- (void)endFaceTime;
- (_Bool)activeFaceTimeCallExists;
- (void)_faceTimeStateChanged:(id)arg1;
- (id)incomingFaceTimeCall;
- (id)activeFaceTimeCall;
- (id)currentFaceTimeCall;
- (_Bool)hasFaceTimeCapability;
- (_Bool)faceTimeIsAvailable;
- (_Bool)inFaceTimeVideo;
- (_Bool)canStartFaceTime;

@end
