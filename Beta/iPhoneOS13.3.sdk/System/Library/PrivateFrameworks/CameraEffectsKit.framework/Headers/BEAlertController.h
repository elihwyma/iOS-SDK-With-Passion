/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIAlertController.h>

@interface BEAlertController : UIAlertController

{
    _Bool _isSheet;
    long long _alertTag;
}

@property (nonatomic) _Bool isSheet;
@property (nonatomic) long long alertTag;

+ (id)showOneButtonAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 buttonHandler:(CDUnknownBlockType)arg4;
+ (id)showOneButtonSheetOnViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3 buttonTitle:(id)arg4 buttonHandler:(CDUnknownBlockType)arg5;
+ (id)showTwoButtonAlertWithTitle:(id)arg1 message:(id)arg2 button1Title:(id)arg3 button1Style:(long long)arg4 button1Handler:(CDUnknownBlockType)arg5 button2Title:(id)arg6 button2Style:(long long)arg7 button2Handler:(CDUnknownBlockType)arg8;
+ (id)showTwoButtonSheetOnViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3 button1Title:(id)arg4 button1Style:(long long)arg5 button1Handler:(CDUnknownBlockType)arg6 button2Title:(id)arg7 button2Style:(long long)arg8 button2Handler:(CDUnknownBlockType)arg9;

- (long long)textFieldCount;
- (long long)buttonCount;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)cancelButtonAction;
- (void)showAnimated:(_Bool)arg1;
- (void)dismissWithNoActionAnimated:(_Bool)arg1;
- (void)dismissWithCancelActionAnimated:(_Bool)arg1;
- (id)initAlertWithTitle:(id)arg1 message:(id)arg2;
- (id)addAlertCancelButtonWithTitle:(id)arg1 tag:(long long)arg2 action:(CDUnknownBlockType)arg3;
- (id)initSheetWithTitle:(id)arg1 message:(id)arg2;
- (void)showOnViewController:(id)arg1 animated:(_Bool)arg2;
- (id)addAlertButtonWithTitle:(id)arg1 style:(long long)arg2 tag:(long long)arg3 action:(CDUnknownBlockType)arg4;
- (id)initWithStyle:(long long)arg1 title:(id)arg2 message:(id)arg3;
- (id)buttonActionWithTag:(long long)arg1;
- (id)textFieldWithTag:(long long)arg1;
- (void)addAlertButton:(id)arg1;
- (id)addAlertButtonWithTitle:(id)arg1 tag:(long long)arg2 action:(CDUnknownBlockType)arg3;
- (id)addAlertDestructiveButtonWithTitle:(id)arg1 tag:(long long)arg2 action:(CDUnknownBlockType)arg3;
- (void)addAlertTextFieldWithTag:(long long)arg1 configurationBlock:(CDUnknownBlockType)arg2;
- (void)showInView:(id)arg1 viewController:(id)arg2 animated:(_Bool)arg3;
- (void)showFromRect:(struct CGRect)arg1 inView:(id)arg2 viewController:(id)arg3 arrowDirection:(unsigned long long)arg4 animated:(_Bool)arg5;
- (void)dismissWithActionForTag:(long long)arg1 animated:(_Bool)arg2;
- (id)textInFieldWithTag:(long long)arg1;

@end
