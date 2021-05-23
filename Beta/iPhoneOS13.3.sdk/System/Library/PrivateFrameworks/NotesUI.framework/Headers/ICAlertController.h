/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIAlertController.h>

@class UIAlertAction;

@interface ICAlertController : UIAlertController

{
    _Bool _didPerformAction;
    _Bool _didDismissWithDissmissWithoutActionBlock;
    CDUnknownBlockType _dissmissWithoutActionBlock;
    UIAlertAction *_dismissAction;
}

@property (nonatomic) _Bool didDismissWithDissmissWithoutActionBlock;
@property (nonatomic) _Bool didPerformAction;
@property (copy, nonatomic) CDUnknownBlockType dissmissWithoutActionBlock;
@property (retain, nonatomic) UIAlertAction *dismissAction;

- (void)dealloc;
- (_Bool)_canShowWhileLocked;
- (void)dismissWhenPossible;

@end
