/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <GameController/GCGamepad.h>

@class NSData;

@interface GCGamepadSnapshot : GCGamepad

{
    NSData *snapshotData;
}

@property (copy) NSData *snapshotData;

- (id)init;
- (id)initWithController:(id)arg1 snapshotData:(id)arg2;
- (id)initWithSnapshotData:(id)arg1;

@end
