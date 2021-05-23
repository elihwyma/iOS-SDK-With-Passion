/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/PKModifyStrokesCommand.h>

@class NSDictionary;

@interface PKSliceStrokesCommand : PKModifyStrokesCommand

{
    NSDictionary *_substrokes;
}

@property (nonatomic, readonly) NSDictionary *substrokes;

- (id)description;
- (void)applyToDrawing:(id)arg1;
- (id)invertedInDrawing:(id)arg1;
- (id)initWithDrawingUUID:(id)arg1 actionName:(id)arg2 substrokes:(id)arg3 strokesHidden:(id)arg4 hiding:(_Bool)arg5;

@end
