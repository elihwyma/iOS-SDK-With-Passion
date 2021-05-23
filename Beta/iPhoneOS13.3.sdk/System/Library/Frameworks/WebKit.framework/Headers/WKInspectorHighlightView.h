/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIView.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface WKInspectorHighlightView : UIView

{
    NSMutableArray *_layers;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)update:(const struct Highlight *)arg1;
- (void)_removeAllLayers;
- (void)_createLayers:(unsigned long long)arg1;
- (void)_layoutForNodeHighlight:(const struct Highlight *)arg1 offset:(unsigned int)arg2;
- (void)_layoutForNodeListHighlight:(const struct Highlight *)arg1;
- (void)_layoutForRectsHighlight:(const struct Highlight *)arg1;

@end
