/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class DOMNode;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollInfo : NSObject

{
    _Bool _isUserScroll;
    DOMNode *_node;
    struct CGPoint _offset;
}

@property (retain, nonatomic) DOMNode *node;
@property (nonatomic) struct CGPoint offset;
@property (nonatomic) _Bool isUserScroll;

- (void)dealloc;
- (id)initWithNode:(id)arg1 offset:(struct CGPoint)arg2 isUserScroll:(_Bool)arg3;
- (_Bool)coalesceScrollForNode:(id)arg1 offset:(struct CGPoint)arg2 isUserScroll:(_Bool)arg3;

@end
