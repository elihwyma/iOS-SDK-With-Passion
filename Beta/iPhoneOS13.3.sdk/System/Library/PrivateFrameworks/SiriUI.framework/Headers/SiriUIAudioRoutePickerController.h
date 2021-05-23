/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

@class NSString, SiriRoutePickerAlertController, UIWindow;

@protocol SiriUIAudioRoutePickerControllerDelegate;

@interface SiriUIAudioRoutePickerController : NSObject

{
    id <SiriUIAudioRoutePickerControllerDelegate> _delegate;
    NSString *_audioCategory;
    NSString *_audioMode;
    UIWindow *_window;
    _Bool _hasRoutesToPick;
    _Bool _bluetoothIsPicked;
    SiriRoutePickerAlertController *_pickerAlertController;
}

@property (weak, nonatomic) id <SiriUIAudioRoutePickerControllerDelegate> delegate;
@property (retain, nonatomic) SiriRoutePickerAlertController *pickerAlertController;

+ (id)_nameForRouteInfo:(id)arg1 isSelected:(_Bool *)arg2 isBluetooth:(_Bool *)arg3 isOverride:(_Bool *)arg4 audioRouteName:(id *)arg5;

- (void)dealloc;
- (_Bool)isShowingPicker;
- (void)_pickableRoutesChanged:(id)arg1;
- (void)_routeChanged:(id)arg1;
- (void)refreshRoutes;
- (void)_showAlertControllerFromViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_selectRouteWithInfo:(id)arg1;
- (void)_dismissAlertController:(_Bool)arg1;
- (void)_fetchPickableRoutesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_removeWindow;
- (void)cancelPickerAnimated:(_Bool)arg1;
- (id)initWithCategory:(id)arg1 mode:(id)arg2 delegate:(id)arg3;
- (_Bool)hasRoutesToPick;
- (_Bool)bluetoothIsPicked;
- (void)showPickerFromViewController:(id)arg1 animated:(_Bool)arg2;

@end
