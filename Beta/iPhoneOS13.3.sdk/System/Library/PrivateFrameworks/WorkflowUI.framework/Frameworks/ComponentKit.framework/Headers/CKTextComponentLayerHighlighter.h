/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class CKHighlightOverlayLayer, CKTextComponentLayer;

@interface CKTextComponentLayerHighlighter : NSObject

{
    CKTextComponentLayer *_textComponentLayer;
    CKHighlightOverlayLayer *_highlightOverlayLayer;
    struct _NSRange _highlightedRange;
}

@property (nonatomic) struct _NSRange highlightedRange;

- (void)layoutHighlight;
- (id)initWithTextComponentLayer:(id)arg1;

@end
