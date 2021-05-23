/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <GameController/GCMicroGamepad.h>

@class NSData;

@interface GCMicroGamepadSnapshot : GCMicroGamepad

{
    NSData *snapshotData;
}

@property (copy) NSData *snapshotData;

- (id)init;
- (id)initWithController:(id)arg1 snapshotData:(id)arg2;
- (id)initWithSnapshotData:(id)arg1;
- (_Bool)supportsDpadTaps;

@end
