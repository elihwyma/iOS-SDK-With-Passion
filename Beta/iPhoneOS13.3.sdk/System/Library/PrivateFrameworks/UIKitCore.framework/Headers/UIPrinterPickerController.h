/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIPrinter;

@protocol UIPrinterPickerControllerDelegate;

@interface UIPrinterPickerController : NSObject

{
    CDUnknownBlockType _completionHandler;
    id _state;
    UIPrinter *_selectedPrinter;
    id <UIPrinterPickerControllerDelegate> _delegate;
}

@property (retain, nonatomic) UIPrinter *selectedPrinter;
@property (weak, nonatomic) id <UIPrinterPickerControllerDelegate> delegate;

+ (id)printerPickerControllerWithInitiallySelectedPrinter:(id)arg1;

- (id)init;
- (id)_init;
- (void)dismissAnimated:(_Bool)arg1;
- (void)_printerPickerDidPresent;
- (void)_printerPickerWillDismiss;
- (void)_printerPickerDidDismiss;
- (_Bool)_delegateFiltersPrinters;
- (_Bool)_shouldShowPrinter:(id)arg1;
- (_Bool)presentAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)presentFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)presentFromBarButtonItem:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_setupPickerPanel:(CDUnknownBlockType)arg1;

@end
