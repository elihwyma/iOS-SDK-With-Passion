/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface PKUndoCommand : NSObject

{
    NSUUID *_drawingUUID;
    NSString *_actionName;
}

@property (nonatomic, readonly) NSUUID *drawingUUID;
@property (nonatomic, readonly) NSString *actionName;

- (id)strokes;
- (id)inverted;
- (void)registerWithUndoManager:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)applyToDrawing:(id)arg1;
- (id)invertedInDrawing:(id)arg1;
- (id)initWithDrawingUUID:(id)arg1 actionName:(id)arg2;

@end
