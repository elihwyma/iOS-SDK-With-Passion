/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIViewController.h>

#import <CameraEffectsKit/Swift-Protocol.h>

@class CFXEffectPickerView, CFXEffectType, NSArray, NSObject, NSString, UIImage;

@protocol CFXEffectPickerViewControllerDelegate, OS_dispatch_queue;

@interface CFXEffectPickerViewController : UIViewController <Swift>

{
    _Bool _previewing;
    UIImage *_previewBackgroundImage;
    CFXEffectType *_effectType;
    CFXEffectPickerView *_pickerView;
    id <CFXEffectPickerViewControllerDelegate> _delegate;
    NSArray *_effects;
    NSObject<OS_dispatch_queue> *_effectLoadingQueue;
}

@property (retain, nonatomic) NSArray *effects;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *effectLoadingQueue;
@property (retain, nonatomic) CFXEffectPickerView *pickerView;
@property (nonatomic, getter=isPreviewing) _Bool previewing;
@property (retain, nonatomic) UIImage *previewBackgroundImage;
@property (retain, nonatomic) CFXEffectType *effectType;
@property (weak, nonatomic) id <CFXEffectPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)effectPickerViewController;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)startPreviewing;
- (void)stopPreviewing;
- (_Bool)shouldRotateCellsForDeviceOrientation;
- (_Bool)shouldDisplayExpandedModeForFilterPickerView:(id)arg1;
- (unsigned long long)numberOfEffectsInPickerView:(id)arg1;
- (unsigned long long)effectPickerView:(id)arg1 indexForEffectID:(id)arg2;
- (unsigned long long)selectedFilterIndexForFilterPickerView:(id)arg1;
- (id)effectPickerView:(id)arg1 effectTitleAtIndex:(long long)arg2;
- (void)effectPickerView:(id)arg1 didPickEffectAtIndex:(long long)arg2;
- (id)effectPickerView:(id)arg1 effectIdentifierAtIndex:(long long)arg2;
- (void)effectPickerView:(id)arg1 effectAtIndex:(long long)arg2 forPreviewingAtSizeInPixels:(struct CGSize)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)CFX_restartPreviewing;
- (void)CFX_stopPreviewing;
- (void)CFX_loadEffectsForType:(id)arg1;
- (id)CFX_createPickerViewForEffectType:(id)arg1;
- (unsigned long long)CFX_indexForEffectIdentifier:(id)arg1;
- (void)CFX_configureEffect:(id)arg1 previewSizeInPixels:(struct CGSize)arg2;
- (void)filterPickerPresentationModeDidChange;
- (id)effectPickerView:(id)arg1 effectAtIndex:(long long)arg2;

@end
