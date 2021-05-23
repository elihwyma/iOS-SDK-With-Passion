/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection, SBPrototypeDumpingGround, SBRestartManager, SBRootSettings;

@interface SBPrototypeController : NSObject

{
    NSXPCConnection *_prototypingUIServerConnection;
    _Bool _hasActiveKeyHIDEventRouters;
    SBPrototypeDumpingGround *_dumpingGround;
    SBRootSettings *_rootSettings;
    SBRestartManager *_restartManager;
}

@property (weak, nonatomic) SBRestartManager *restartManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (_Bool)handleKeyHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)rootSettings;
- (void)_createConnection;
- (void)_sendEvent:(long long)arg1;
- (void)killSpringBoard;
- (_Bool)handleRingerSwitchEvent;
- (void)restartSpringBoard;
- (_Bool)handleVolumeIncreaseEvent;
- (_Bool)handleVolumeDecreaseEvent;
- (void)_updateKeyHIDEventRouters;
- (_Bool)_handlePrototypingEvent:(long long)arg1;
- (_Bool)_handleKeyHIDEvent:(struct __IOHIDEvent *)arg1;
- (_Bool)_shouldSendEvent:(long long)arg1;

@end
