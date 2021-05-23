/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/PKUndoCommand.h>

@class NSArray;

@interface PKModifyStrokesCommand : PKUndoCommand

{
    _Bool _hide;
    NSArray *_strokes;
}

@property (nonatomic, readonly) NSArray *strokes;
@property (nonatomic, readonly) _Bool hide;

+ (id)commandForMakingStrokeVisible:(id)arg1 drawing:(id)arg2 hiding:(_Bool)arg3;
+ (id)commandForErasingStrokes:(id)arg1 drawing:(id)arg2;
+ (id)commandForMakingStrokesVisible:(id)arg1 drawing:(id)arg2;
+ (id)commandForErasingAllStrokesInDrawing:(id)arg1;

- (id)description;
- (void)applyToDrawing:(id)arg1;
- (id)invertedInDrawing:(id)arg1;
- (id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 hiding:(_Bool)arg4;

@end
