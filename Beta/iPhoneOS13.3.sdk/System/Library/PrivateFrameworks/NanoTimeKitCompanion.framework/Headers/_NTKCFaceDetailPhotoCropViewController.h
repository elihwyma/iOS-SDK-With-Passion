/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIViewController.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CAShapeLayer, NSString, NTKCCenteringScrollView, NTKCompanionCustomPhotosEditor, NTKDigitalTimeLabel, NTKDigitalTimeLabelStyle, NTKFace, UIBarButtonItem, UIView;

@interface _NTKCFaceDetailPhotoCropViewController : UIViewController <Swift>

{
    CAShapeLayer *_reverseMask;
    NTKCCenteringScrollView *_scrollView;
    double _photoScale;
    CAShapeLayer *_mask;
    UIView *_timeContainer;
    NTKDigitalTimeLabel *_time;
    UIBarButtonItem *_deleteButton;
    UIBarButtonItem *_cancelButton;
    _Bool _cancelConfirmed;
    _Bool _deleteConfirmed;
    unsigned long long _index;
    NTKCompanionCustomPhotosEditor *_editor;
    NTKFace *_face;
    NTKDigitalTimeLabelStyle *_timeStyle;
}

@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) NTKCompanionCustomPhotosEditor *editor;
@property (retain, nonatomic) NTKFace *face;
@property (retain, nonatomic) NTKDigitalTimeLabelStyle *timeStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_cancelPressed;
- (void)_donePressed;
- (id)initWithIndex:(unsigned long long)arg1 inPhotosEditor:(id)arg2 forFace:(id)arg3 timeStyle:(id)arg4;
- (void)_deletePressed;
- (void)dismissWithSaving:(_Bool)arg1;

@end
