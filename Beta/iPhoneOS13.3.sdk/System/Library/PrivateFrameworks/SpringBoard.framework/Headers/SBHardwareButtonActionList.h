/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SBHardwareButtonActionList : NSObject

{
    long long _performQueueNestCount;
    _Bool _buttonDown;
    NSMutableArray *_actionBlocks;
}

@property (retain, nonatomic) NSMutableArray *actionBlocks;
@property (nonatomic, getter=isButtonDown) _Bool buttonDown;

- (void)performQueuedButtonUpActions;
- (void)scheduleButtonUpActionBlock:(CDUnknownBlockType)arg1;

@end
