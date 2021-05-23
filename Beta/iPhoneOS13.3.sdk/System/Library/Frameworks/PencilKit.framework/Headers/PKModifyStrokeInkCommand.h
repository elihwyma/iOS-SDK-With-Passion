/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/PKUndoCommand.h>

@class NSArray;

@interface PKModifyStrokeInkCommand : PKUndoCommand

{
    NSArray *_strokes;
    NSArray *_inks;
    NSArray *_oldInks;
}

@property (nonatomic, readonly) NSArray *strokes;
@property (nonatomic, readonly) NSArray *inks;
@property (nonatomic, readonly) NSArray *oldInks;

+ (id)commandForModifyingStrokes:(id)arg1 drawing:(id)arg2 inks:(id)arg3;

- (id)description;
- (void)applyToDrawing:(id)arg1;
- (id)invertedInDrawing:(id)arg1;
- (id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 inks:(id)arg4 oldInks:(id)arg5;

@end
