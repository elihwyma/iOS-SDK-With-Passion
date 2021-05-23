/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class ICDrawingUndoCheckPoint, NSArray, NSString;

@interface ICDrawingUndoCommand : NSObject

{
    _Bool _hide;
    NSArray *_commands;
    NSString *_actionName;
    ICDrawingUndoCheckPoint *_checkPoint;
}

@property (retain, nonatomic) NSArray *commands;
@property (retain, nonatomic) NSString *actionName;
@property (nonatomic, readonly) NSArray *visibleCommands;
@property (nonatomic) _Bool hide;
@property (retain, nonatomic) ICDrawingUndoCheckPoint *checkPoint;

- (double)renderCost;
- (id)undoCommandHidden:(_Bool)arg1;

@end
