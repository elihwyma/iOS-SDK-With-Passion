/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/PKUndoCommand.h>

@class NSArray;

@interface PKTransformStrokesCommand : PKUndoCommand

{
    NSArray *_strokes;
    struct CGAffineTransform _strokeTransform;
}

@property (nonatomic, readonly) NSArray *strokes;
@property (nonatomic, readonly) struct CGAffineTransform strokeTransform;

+ (id)commandForTransforming:(id)arg1 drawing:(id)arg2 strokeTransform:(struct CGAffineTransform)arg3;

- (id)description;
- (void)applyToDrawing:(id)arg1;
- (id)invertedInDrawing:(id)arg1;
- (id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 strokeTransform:(struct CGAffineTransform)arg4;

@end
