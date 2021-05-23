/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class DOMHTMLSelectElement;

@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebFormSelectPeripheral : NSObject

{
    DOMHTMLSelectElement *_selectionNode;
    id <UIWebFormControl> _selectControl;
}

@property (retain, nonatomic) DOMHTMLSelectElement *_selectionNode;
@property (retain, nonatomic) id <UIWebFormControl> _selectControl;

+ (id)createPeripheralWithDOMHTMLSelectElement:(id)arg1;

- (void)dealloc;
- (void)beginEditing;
- (void)endEditing;
- (id)assistantView;
- (id)initWithDOMHTMLSelectElement:(id)arg1;

@end
