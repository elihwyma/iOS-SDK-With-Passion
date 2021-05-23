/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WAKView, WebHighlightLayer, WebNodeHighlightView;

__attribute__((visibility("hidden")))
@interface WebNodeHighlight : NSObject

{
    WAKView *_targetView;
    WebHighlightLayer *_highlightLayer;
    WebNodeHighlightView *_highlightView;
    struct InspectorController *_inspectorController;
    id _delegate;
}

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)highlightView;
- (void)setNeedsDisplay;
- (id)targetView;
- (void)detach;
- (void)attach;
- (id)initWithTargetView:(id)arg1 inspectorController:(struct InspectorController *)arg2;
- (struct InspectorController *)inspectorController;

@end
