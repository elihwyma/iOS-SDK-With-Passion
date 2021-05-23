/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBControlCenterSystemAgent : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isOrientationLocked;
- (_Bool)isRingerMuted;
- (void)lockOrientation;
- (void)unlockOrientation;
- (void)setRingerMuted:(_Bool)arg1;
- (_Bool)isUILocked;

@end
