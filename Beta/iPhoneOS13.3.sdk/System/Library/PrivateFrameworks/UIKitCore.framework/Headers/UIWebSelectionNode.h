/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIWebSelection, UIWebSelectionGraph;

__attribute__((visibility("hidden")))
@interface UIWebSelectionNode : NSObject

{
    UIWebSelectionNode *_fromTopByExpanding;
    UIWebSelectionNode *_fromTopByContracting;
    UIWebSelectionNode *_fromBottomByExpanding;
    UIWebSelectionNode *_fromBottomByContracting;
    UIWebSelectionNode *_fromRightByExpanding;
    UIWebSelectionNode *_fromRightByContracting;
    UIWebSelectionNode *_fromLeftByExpanding;
    UIWebSelectionNode *_fromLeftByContracting;
    UIWebSelectionGraph *_sharedGraph;
    UIWebSelection *_selection;
    _Bool _invalid;
}

@property (retain) UIWebSelection *selection;

- (void)dealloc;
- (void)invalidate;
- (id *)nodeByReferenceFromEdge:(int)arg1 outwards:(_Bool)arg2;
- (id)initWithSelection:(id)arg1 inGraph:(id)arg2;
- (int)oppositeEdge:(int)arg1;
- (id)nodeByMovingEdge:(int)arg1 outwards:(_Bool)arg2;

@end
