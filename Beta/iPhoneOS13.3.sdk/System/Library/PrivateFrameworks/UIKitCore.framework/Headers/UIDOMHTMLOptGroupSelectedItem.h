/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class DOMHTMLOptGroupElement;

__attribute__((visibility("hidden")))
@interface UIDOMHTMLOptGroupSelectedItem : NSObject

{
    DOMHTMLOptGroupElement *_node;
}

@property (retain, nonatomic) DOMHTMLOptGroupElement *_node;

- (void)dealloc;
- (id)node;
- (void)setSelected:(_Bool)arg1;
- (_Bool)selected;
- (_Bool)isGroup;
- (void)unselect;
- (id)initWithHTMLOptGroupNode:(id)arg1;

@end
