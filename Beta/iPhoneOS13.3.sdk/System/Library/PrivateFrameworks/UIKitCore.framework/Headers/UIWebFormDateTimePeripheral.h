/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class DOMHTMLInputElement;

@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebFormDateTimePeripheral : NSObject

{
    DOMHTMLInputElement *_inputElement;
    id <UIWebFormControl> _control;
}

@property (retain, nonatomic) DOMHTMLInputElement *_inputElement;
@property (retain, nonatomic) id <UIWebFormControl> _control;

+ (id)createPeripheralWithDOMHTMLInputElement:(id)arg1;

- (void)dealloc;
- (void)beginEditing;
- (void)endEditing;
- (long long)_datePickerModeForInputType:(id)arg1;
- (id)initWithDOMHTMLInputElement:(id)arg1;
- (id)assistantView;

@end
