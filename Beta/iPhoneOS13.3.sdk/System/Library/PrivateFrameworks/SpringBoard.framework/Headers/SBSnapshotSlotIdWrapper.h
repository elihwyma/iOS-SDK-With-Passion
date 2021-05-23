/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class CAContext;

@interface SBSnapshotSlotIdWrapper : NSObject

{
    unsigned int _slotId;
    CAContext *_context;
}

@property (nonatomic, readonly) unsigned int slotId;
@property (nonatomic, readonly) CAContext *context;

- (id)init;
- (void)dealloc;
- (id)initWithContext:(id)arg1 slotId:(unsigned int)arg2;

@end
