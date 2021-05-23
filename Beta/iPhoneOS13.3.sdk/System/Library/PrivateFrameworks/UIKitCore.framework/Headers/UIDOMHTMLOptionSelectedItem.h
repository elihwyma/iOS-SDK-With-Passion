/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class DOMHTMLOptionElement;

__attribute__((visibility("hidden")))
@interface UIDOMHTMLOptionSelectedItem : NSObject

{
    _Bool _selected;
    DOMHTMLOptionElement *_node;
}

@property (retain, nonatomic) DOMHTMLOptionElement *_node;

- (void)dealloc;
- (id)node;
- (void)setSelected:(_Bool)arg1;
- (_Bool)selected;
- (_Bool)isGroup;
- (void)unselect;
- (id)initWithHTMLOptionNode:(id)arg1;

@end
